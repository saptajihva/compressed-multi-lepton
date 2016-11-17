#ifndef CompressedHiggsinoNtupleMultiTree_h
#define CompressedHiggsinoNtupleMultiTree_h

#include "NtupleBase.hh"
#include "HFntupleBase.hh"
#include "SussexBase.hh"
#include "HiggsinoBase.hh"
#include "SimpleBase.hh"
#include "AdelaideBase.hh"
#include "RestFrames/RestFrames.hh"

using namespace RestFrames;

class CompressedHiggsinoNtupleMultiTree : public NtupleBase<AdelaideBase> { // was <SimpleBase>

    public:
        CompressedHiggsinoNtupleMultiTree(TTree* tree = 0); //, double events = 0);
        virtual ~CompressedHiggsinoNtupleMultiTree();
        double  luminosity = 1000.; //should declare in AdelaideBase.hh??
        double nevents;

    private:
        void InitOutputTree();
        void FillOutputTree();
        //int nEventsTotal; // this is pulled from h1 NumberEvents
        int m_ElecMuon_TrigMatched;
        int m_DiElec_TrigMatched;
        int m_DiMuon_TrigMatched;
        int m_HLT_e24_lhmedium_iloose_L1EM20VH;
        int m_HLT_e24_lhmedium_iloose_L1EM18VH;
        int m_HLT_e24_lhtight_iloose;
        int m_HLT_e26_lhtight_iloose;
        int m_HLT_e24_lhmedium_nod0_L1EM20VH;
        int m_HLT_e24_lhtight_nod0_ivarloose;
        int m_HLT_e60_lhmedium;
        int m_HLT_e60_lhmedium_nod0;
        int m_HLT_e140_lhloose_nod0;
        int m_HLT_2e12_lhloose_L12EM10VH;
        int m_HLT_2e15_lhvloose_nod0_L12EM13VH;
        int m_HLT_2e17_lhloose_nod0;
        int m_HLT_2e17_lhloose;
        int m_HLT_mu26_imedium;
        int m_HLT_mu24_imedium;
        int m_HLT_mu24_iloose_L1MU15;
        int m_HLT_mu20_iloose_L1MU15;
        int m_HLT_mu50;
        int m_HLT_mu18_mu8noL1;
        int m_HLT_mu20_mu8noL1;
        int m_HLT_mu22_mu8noL1;
        int m_HLT_mu24_mu8noL1;
        int m_HLT_2mu10;
        int m_HLT_2mu14;
        int m_HLT_e17_lhloose_mu14;
        int m_HLT_e7_lhmedium_mu24;
        int m_HLT_e17_lhloose_nod0_mu14;
        int m_HLT_e24_lhmedium_L1EM20VHI_mu8noL1;

        // Higgsino model format-specific variables

        double m_MET;
        //		double m_HLT_xe70;
        double m_TrkMET;
        double m_dphiMin1;
        double m_dphiMin2;
        double m_dphiMin3;
        double m_dphiMinAll;

        double m_pT_1jet;
        double m_pT_2jet;
        double m_pT_3jet;
        double m_pT_4jet;

        int m_nEl;
        int m_nMu;
        double m_MT2W;
        double m_MT2Top;
        double m_pT_1lep;
        int m_id_1lep;
        double m_pT_2lep;
        int m_id_2lep;
        double m_pT_3lep;
        int m_id_3lep;

        // common variables for output tree
        double m_weight;

        double m_pTjS1;
        double m_pTjS2;
        double m_pTjS3;
        double m_pTjS4;
        double m_bjS1;
        double m_bjS2;
        double m_bjS3;
        double m_bjS4;
        double m_pTjISR1;
        double m_pTjISR2;
        double m_pTjISR3;
        double m_pTjISR4;
        double m_bjISR1;
        double m_bjISR2;
        double m_bjISR3;
        double m_bjISR4;
        int m_NjS;
        int m_NjISR;
        int m_NbS;
        int m_NbISR;
        // which tree are we using?
        bool m_Is_2LNJ;
        bool m_Is_1L1L;
        bool m_Is_2L1L;
        bool m_Is_Z;
        bool m_Is_OS;
        // compressed observables
        // common to all trees
        double m_PTISR;
        double m_PTI;
        double m_PTCM;
        double m_RISR;
        double m_cosCM;
        double m_cosS;
        double m_MISR;
        double m_dphiCMI;
        double m_dphiSI;
        double m_dphiISRI;

        double m_HN2S;
        double m_H11S;
        double m_HN1Ca;
        double m_HN1Cb;
        double m_H11Ca;
        double m_H11Cb;
        double m_cosC;

        double m_MZ;
        double m_MJ;
        double m_cosZ;
        double m_cosJ;

        // RestFrames frames and friends

        // combinatoric (transverse) tree
        // for jet assignment
        LabRecoFrame*        LAB_comb;
        DecayRecoFrame*      CM_comb;
        DecayRecoFrame*      S_comb;
        VisibleRecoFrame*    ISR_comb;
        VisibleRecoFrame*    J_comb;
        VisibleRecoFrame*    L_comb;
        InvisibleRecoFrame*  I_comb;
        InvisibleGroup*      INV_comb;
        SetMassInvJigsaw*    InvMass_comb;
        CombinatoricGroup*   JETS_comb;
        MinMassesCombJigsaw* SplitJETS_comb;

        // 2L+NJ tree (Z->ll + W/Z->qq)
        LabRecoFrame*        LAB_2LNJ;
        DecayRecoFrame*      CM_2LNJ;
        DecayRecoFrame*      S_2LNJ;
        VisibleRecoFrame*    ISR_2LNJ;

        DecayRecoFrame*      Ca_2LNJ;  
        DecayRecoFrame*      Z_2LNJ;
        VisibleRecoFrame*    L1_2LNJ;
        VisibleRecoFrame*    L2_2LNJ;

        DecayRecoFrame*          Cb_2LNJ;
        SelfAssemblingRecoFrame* JSA_2LNJ;
        VisibleRecoFrame*        J_2LNJ;

        InvisibleRecoFrame*  Ia_2LNJ;
        InvisibleRecoFrame*  Ib_2LNJ;

        InvisibleGroup*       INV_2LNJ;
        SetMassInvJigsaw*     InvMass_2LNJ;
        SetRapidityInvJigsaw* InvRapidity_2LNJ;
        ContraBoostInvJigsaw* SplitINV_2LNJ;
        CombinatoricGroup*    JETS_2LNJ;

        // 1L+1L tree (Z/W->l + Z/W->l)
        LabRecoFrame*        LAB_1L1L;
        DecayRecoFrame*      CM_1L1L;
        DecayRecoFrame*      S_1L1L;
        VisibleRecoFrame*    ISR_1L1L;

        DecayRecoFrame*      Ca_1L1L;  
        VisibleRecoFrame*    La_1L1L;

        DecayRecoFrame*      Cb_1L1L;  
        VisibleRecoFrame*    Lb_1L1L;

        InvisibleRecoFrame*  Ia_1L1L;
        InvisibleRecoFrame*  Ib_1L1L;

        InvisibleGroup*       INV_1L1L;
        SetMassInvJigsaw*     InvMass_1L1L;
        SetRapidityInvJigsaw* InvRapidity_1L1L;
        ContraBoostInvJigsaw* SplitINV_1L1L;

        // 2L+1L tree (Z->ll + Z/W->l)
        LabRecoFrame*        LAB_2L1L;
        DecayRecoFrame*      CM_2L1L;
        DecayRecoFrame*      S_2L1L;
        VisibleRecoFrame*    ISR_2L1L;

        DecayRecoFrame*      Ca_2L1L;
        DecayRecoFrame*      Z_2L1L;  
        VisibleRecoFrame*    L1_2L1L;
        VisibleRecoFrame*    L2_2L1L;

        DecayRecoFrame*      Cb_2L1L;  
        VisibleRecoFrame*    Lb_2L1L;

        InvisibleRecoFrame*  Ia_2L1L;
        InvisibleRecoFrame*  Ib_2L1L;

        InvisibleGroup*       INV_2L1L;
        SetMassInvJigsaw*     InvMass_2L1L;
        SetRapidityInvJigsaw* InvRapidity_2L1L;
        ContraBoostInvJigsaw* SplitINV_2L1L;


};

#endif
