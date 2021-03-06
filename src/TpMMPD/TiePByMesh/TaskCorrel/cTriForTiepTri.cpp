#include "TaskCorrel.h"

//  ============================== cTriForTiepTri ==========================


cTriForTiepTri::cTriForTiepTri(cAppliTaskCorrel *aAppli, triangle * aTri3d):
    mNumImg (-1),
    mPt1    (Pt2dr(0.0,0.0)),
    mPt2    (Pt2dr(0.0,0.0)),
    mPt3    (Pt2dr(0.0,0.0)),
    mAppli  (aAppli),
    mTri3D  (aTri3d),
    mrprjOK (false)
{}

bool cTriForTiepTri::reprj(int aNumImg)
{
    cImgForTiepTri * aImg = mAppli->VImgs()[aNumImg];

    Pt3dr Pt1 = mTri3D->getSommet(0);
    Pt3dr Pt2 = mTri3D->getSommet(1);
    Pt3dr Pt3 = mTri3D->getSommet(2);

    mPt1 = aImg->Cam()->Ter2Capteur(Pt1);
    mPt2 = aImg->Cam()->Ter2Capteur(Pt2);
    mPt3 = aImg->Cam()->Ter2Capteur(Pt3);

    mNumImg = aNumImg;
    if      (     aImg->inside(mPt1)
              &&  aImg->inside(mPt2)
              &&  aImg->inside(mPt3)
              &&  aImg->Cam()->PIsVisibleInImage(Pt1)
              &&  aImg->Cam()->PIsVisibleInImage(Pt2)
              &&  aImg->Cam()->PIsVisibleInImage(Pt3)
            )
    {
        mrprjOK = true;
        return true;
    }
    else
        {
            mrprjOK = false;
            return false;
        }
}

double cTriForTiepTri::valElipse(int & aNInter)
{
    if (!mrprjOK || mNumImg == -1)
    {
        cout<<"Projection error !"<<endl;
        return DBL_MIN;
    }
    else
    {
        double aSurf =  (mPt1-mPt2) ^ (mPt1-mPt3);
        Pt3dr Pt1 = mTri3D->getSommet(0);
        Pt3dr Pt2 = mTri3D->getSommet(1);
        Pt3dr Pt3 = mTri3D->getSommet(2);
        if (-aSurf > TT_SEUIL_SURF_TRIANGLE && mrprjOK)
        {
            //creer plan 3D local contient triangle
            cElPlan3D * aPlanLoc = new cElPlan3D(Pt1, Pt2, Pt3);
            ElRotation3D aRot_PE = aPlanLoc->CoordPlan2Euclid();
            ElRotation3D aRot_EP = aRot_PE.inv();
            //calcul coordonne sommet triangle dans plan 3D local (devrait avoir meme Z)
            Pt3dr aPtP0 = aRot_EP.ImAff(Pt1); //sommet triangle on plan local
            Pt3dr aPtP1 = aRot_EP.ImAff(Pt2);
            Pt3dr aPtP2 = aRot_EP.ImAff(Pt3);
            //creer translation entre coordonne image global -> coordonne image local du triangle (plan image)
            ElAffin2D aAffImG2ImL(ElAffin2D::trans(mPt1));
            Pt2dr aPtPIm0 = aAffImG2ImL(mPt1);
            Pt2dr aPtPIm1 = aAffImG2ImL(mPt2);
            Pt2dr aPtPIm2 = aAffImG2ImL(mPt3);
            //calcul affine entre plan 3D local (elimine Z) et plan 2D local
            ElAffin2D aAffLc2Im;
            aAffLc2Im = aAffLc2Im.FromTri2Tri(  Pt2dr(aPtP0.x, aPtP0.y),
                                                Pt2dr(aPtP1.x, aPtP1.y),
                                                Pt2dr(aPtP2.x, aPtP2.y),
                                                aPtPIm0,aPtPIm1,aPtPIm2
                                             );
            //calcul vector max min pour choisir img master
            double vecA_cr =  aAffLc2Im.I10().x*aAffLc2Im.I10().x + aAffLc2Im.I10().y*aAffLc2Im.I10().y;
            double vecB_cr =  aAffLc2Im.I01().x*aAffLc2Im.I01().x + aAffLc2Im.I01().y*aAffLc2Im.I01().y;
            double AB_cr   =  pow(aAffLc2Im.I10().x*aAffLc2Im.I01().x,2) + pow(aAffLc2Im.I10().y*aAffLc2Im.I01().y,2);
            //double theta_max =  vecA_cr + vecB_cr +sqrt((vecA_cr - vecB_cr) + 4*AB_cr)*(0.5);
            //Interaction : disp ellipse on image:
            if (aNInter != 0)
            {
                //calcul le cercle discretize dans le plan 3D local
                Video_Win * aVW = mAppli->VVW()[mNumImg];
                double rho;
                double aSclElps=-1;
                if (aSclElps == -1)
                {
                    double rho1 = sqrt(aPtP1.x*aPtP1.x + aPtP1.y*aPtP1.y);
                    double rho2 = sqrt(aPtP2.x*aPtP2.x + aPtP2.y*aPtP2.y);
                    if (rho1 > rho2)
                        rho = rho1;
                    else
                        rho = rho2;

                }
                else
                {
                    double scale = euclid ( aAffLc2Im.inv()(Pt2dr(0,0)) - aAffLc2Im.inv()(Pt2dr(aSclElps,0)) );
                    rho = scale;
                }
                double aNbPt = 100;
                vector<Pt2dr> VCl;
                for (uint aKP=0; aKP<aNbPt; aKP++)
                {
                    Pt2dr ptCrlImg;
                    ptCrlImg = aAffLc2Im(Pt2dr::FromPolar(rho, aKP*2*PI/aNbPt));
                    VCl.push_back(ptCrlImg);
                }
                Line_St lstLineG(aVW->pdisc()(P8COL::green),1);
                ELISE_COPY(aVW->all_pts(), mAppli->VImgs()[mNumImg]->Tif().in_proj(), aVW->ogray());
                aVW->draw_poly_ferm(VCl, lstLineG);
                if (mNumImg == int(mAppli->VVW().size() - 1))
                    aVW->clik_in();
            }
            return (vecA_cr + vecB_cr +sqrt((vecA_cr - vecB_cr) + 4*AB_cr)*(-0.5));
        }
        else
        {
            mrprjOK = false;
            return DBL_MIN;
        }
    }
}


