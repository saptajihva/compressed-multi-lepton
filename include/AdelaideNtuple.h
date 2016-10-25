//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Aug 30 01:43:28 2016 by ROOT version 6.04/14
// from TTree CompressedAnalysis/CompressedAnalysis
// found on file: HiggsBackground.root
//////////////////////////////////////////////////////////

#ifndef AdelaideNtuple_h
#define AdelaideNtuple_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class AdelaideNtuple {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        weight;
   Double_t        MET;
   Double_t        TrkMET;
   Double_t        dphiMin1;
   Double_t        dphiMin2;
   Double_t        dphiMin3;
   Double_t        dphiMinAll;
   Double_t        pT_1jet;
   Double_t        pT_2jet;
   Double_t        pT_3jet;
   Double_t        pT_4jet;
   Int_t           nEl;
   Int_t           nMu;
   Double_t        MT2W;
   Double_t        MT2Top;
   Double_t        pT_1lep;
   Int_t           id_1lep;
   Double_t        pT_2lep;
   Int_t           id_2lep;
   Double_t        pT_3lep;
   Int_t           id_3lep;
   Double_t        pTjS1;
   Double_t        pTjS2;
   Double_t        pTjS3;
   Double_t        pTjS4;
   Int_t           NjS;
   Int_t           NjISR;
   Bool_t          Is_2LNJ;
   Bool_t          Is_1L1L;
   Bool_t          Is_2L1L;
   Double_t        PTCM;
   Double_t        PTISR;
   Double_t        RISR;
   Double_t        cosCM;
   Double_t        cosS;
   Double_t        MISR;
   Double_t        dphiCMI;
   Double_t        dphiSI;
   Double_t        dphiISRI;
   Double_t        HN2S;
   Double_t        H11S;
   Double_t        HN1Ca;
   Double_t        HN1Cb;
   Double_t        H11Ca;
   Double_t        H11Cb;
   Double_t        cosC;
   Double_t        MZ;
   Double_t        MJ;
   Double_t        cosZ;
   Double_t        cosJ;
   Double_t        HLT_xe70;
   Int_t           DiElec_TrigMatched;
   Int_t           DiMuon_TrigMatched;
   Int_t           ElecMuon_TrigMatched;
   Int_t           HLT_e24_lhmedium_iloose_L1EM20VH;
   Int_t           HLT_e24_lhmedium_iloose_L1EM18VH;
   Int_t           HLT_e24_lhtight_iloose;
   Int_t           HLT_e26_lhtight_iloose;
   Int_t           HLT_e24_lhmedium_nod0_L1EM20VH;
   Int_t           HLT_e24_lhtight_nod0_ivarloose;
   Int_t           HLT_e60_lhmedium;
   Int_t           HLT_e60_lhmedium_nod0;
   Int_t           HLT_e140_lhloose_nod0;
   Int_t           HLT_2e12_lhloose_L12EM10VH;
   Int_t           HLT_2e15_lhvloose_nod0_L12EM13VH;
   Int_t           HLT_2e17_lhloose_nod0;
   Int_t           HLT_2e17_lhloose;
   Int_t           HLT_mu26_imedium;
   Int_t           HLT_mu24_imedium;
   Int_t           HLT_mu24_iloose_L1MU15;
   Int_t           HLT_mu20_iloose_L1MU15;
   Int_t           HLT_mu50;
   Int_t           HLT_mu18_mu8noL1;
   Int_t           HLT_mu20_mu8noL1;
   Int_t           HLT_mu22_mu8noL1;
   Int_t           HLT_mu24_mu8noL1;
   Int_t           HLT_2mu10;
   Int_t           HLT_2mu14;
   Int_t           HLT_e17_lhloose_mu14;
   Int_t           HLT_e7_lhmedium_mu24;
   Int_t           HLT_e17_lhloose_nod0_mu14;
   Int_t           HLT_e24_lhmedium_L1EM20VHI_mu8noL1;

   // List of branches
   TBranch        *b_weight;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_TrkMET;   //!
   TBranch        *b_dphiMin1;   //!
   TBranch        *b_dphiMin2;   //!
   TBranch        *b_dphiMin3;   //!
   TBranch        *b_dphiMinAll;   //!
   TBranch        *b_pT_1jet;   //!
   TBranch        *b_pT_2jet;   //!
   TBranch        *b_pT_3jet;   //!
   TBranch        *b_pT_4jet;   //!
   TBranch        *b_nEl;   //!
   TBranch        *b_nMu;   //!
   TBranch        *b_MT2W;   //!
   TBranch        *b_MT2Top;   //!
   TBranch        *b_pT_1lep;   //!
   TBranch        *b_id_1lep;   //!
   TBranch        *b_pT_2lep;   //!
   TBranch        *b_id_2lep;   //!
   TBranch        *b_pT_3lep;   //!
   TBranch        *b_id_3lep;   //!
   TBranch        *b_pTjS1;   //!
   TBranch        *b_pTjS2;   //!
   TBranch        *b_pTjS3;   //!
   TBranch        *b_pTjS4;   //!
   TBranch        *b_NjS;   //!
   TBranch        *b_NjISR;   //!
   TBranch        *b_Is_2LNJ;   //!
   TBranch        *b_Is_1L1L;   //!
   TBranch        *b_Is_2L1L;   //!
   TBranch        *b_PTCM;   //!
   TBranch        *b_PTISR;   //!
   TBranch        *b_RISR;   //!
   TBranch        *b_cosCM;   //!
   TBranch        *b_cosS;   //!
   TBranch        *b_MISR;   //!
   TBranch        *b_dphiCMI;   //!
   TBranch        *b_dphiSI;   //!
   TBranch        *b_dphiISRI;   //!
   TBranch        *b_HN2S;   //!
   TBranch        *b_H11S;   //!
   TBranch        *b_HN1Ca;   //!
   TBranch        *b_HN1Cb;   //!
   TBranch        *b_H11Ca;   //!
   TBranch        *b_H11Cb;   //!
   TBranch        *b_cosC;   //!
   TBranch        *b_MZ;   //!
   TBranch        *b_MJ;   //!
   TBranch        *b_cosZ;   //!
   TBranch        *b_cosJ;   //!
   TBranch        *b_HLT_xe70;   //!
   TBranch        *b_DiElec_TrigMatched;   //!
   TBranch        *b_DiMuon_TrigMatched;   //!
   TBranch        *b_ElecMuon_TrigMatched;   //!
   TBranch        *b_HLT_e24_lhmedium_iloose_L1EM20VH;   //!
   TBranch        *b_HLT_e24_lhmedium_iloose_L1EM18VH;   //!
   TBranch        *b_HLT_e24_lhtight_iloose;   //!
   TBranch        *b_HLT_e26_lhtight_iloose;   //!
   TBranch        *b_HLT_e24_lhmedium_nod0_L1EM20VH;   //!
   TBranch        *b_HLT_e24_lhtight_nod0_ivarloose;   //!
   TBranch        *b_HLT_e60_lhmedium;   //!
   TBranch        *b_HLT_e60_lhmedium_nod0;   //!
   TBranch        *b_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_HLT_2e12_lhloose_L12EM10VH;   //!
   TBranch        *b_HLT_2e15_lhvloose_nod0_L12EM13VH;   //!
   TBranch        *b_HLT_2e17_lhloose_nod0;   //!
   TBranch        *b_HLT_2e17_lhloose;   //!
   TBranch        *b_HLT_mu26_imedium;   //!
   TBranch        *b_HLT_mu24_imedium;   //!
   TBranch        *b_HLT_mu24_iloose_L1MU15;   //!
   TBranch        *b_HLT_mu20_iloose_L1MU15;   //!
   TBranch        *b_HLT_mu50;   //!
   TBranch        *b_HLT_mu18_mu8noL1;   //!
   TBranch        *b_HLT_mu20_mu8noL1;   //!
   TBranch        *b_HLT_mu22_mu8noL1;   //!
   TBranch        *b_HLT_mu24_mu8noL1;   //!
   TBranch        *b_HLT_2mu10;   //!
   TBranch        *b_HLT_2mu14;   //!
   TBranch        *b_HLT_e17_lhloose_mu14;   //!
   TBranch        *b_HLT_e7_lhmedium_mu24;   //!
   TBranch        *b_HLT_e17_lhloose_nod0_mu14;   //!
   TBranch        *b_HLT_e24_lhmedium_L1EM20VHI_mu8noL1;   //!

   AdelaideNtuple(TTree *tree=0);
   virtual ~AdelaideNtuple();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
  // virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif


AdelaideNtuple::AdelaideNtuple(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("HiggsBackground.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("HiggsBackground.root");
      }
      f->GetObject("CompressedAnalysis",tree);

   }
   Init(tree);
}

AdelaideNtuple::~AdelaideNtuple()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t AdelaideNtuple::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t AdelaideNtuple::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void AdelaideNtuple::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("weight", &weight, &b_weight);
   fChain->SetBranchAddress("MET", &MET, &b_MET);
   fChain->SetBranchAddress("TrkMET", &TrkMET, &b_TrkMET);
   fChain->SetBranchAddress("dphiMin1", &dphiMin1, &b_dphiMin1);
   fChain->SetBranchAddress("dphiMin2", &dphiMin2, &b_dphiMin2);
   fChain->SetBranchAddress("dphiMin3", &dphiMin3, &b_dphiMin3);
   fChain->SetBranchAddress("dphiMinAll", &dphiMinAll, &b_dphiMinAll);
   fChain->SetBranchAddress("pT_1jet", &pT_1jet, &b_pT_1jet);
   fChain->SetBranchAddress("pT_2jet", &pT_2jet, &b_pT_2jet);
   fChain->SetBranchAddress("pT_3jet", &pT_3jet, &b_pT_3jet);
   fChain->SetBranchAddress("pT_4jet", &pT_4jet, &b_pT_4jet);
   fChain->SetBranchAddress("nEl", &nEl, &b_nEl);
   fChain->SetBranchAddress("nMu", &nMu, &b_nMu);
   fChain->SetBranchAddress("MT2W", &MT2W, &b_MT2W);
   fChain->SetBranchAddress("MT2Top", &MT2Top, &b_MT2Top);
   fChain->SetBranchAddress("pT_1lep", &pT_1lep, &b_pT_1lep);
   fChain->SetBranchAddress("id_1lep", &id_1lep, &b_id_1lep);
   fChain->SetBranchAddress("pT_2lep", &pT_2lep, &b_pT_2lep);
   fChain->SetBranchAddress("id_2lep", &id_2lep, &b_id_2lep);
   fChain->SetBranchAddress("pT_3lep", &pT_3lep, &b_pT_3lep);
   fChain->SetBranchAddress("id_3lep", &id_3lep, &b_id_3lep);
   fChain->SetBranchAddress("pTjS1", &pTjS1, &b_pTjS1);
   fChain->SetBranchAddress("pTjS2", &pTjS2, &b_pTjS2);
   fChain->SetBranchAddress("pTjS3", &pTjS3, &b_pTjS3);
   fChain->SetBranchAddress("pTjS4", &pTjS4, &b_pTjS4);
   fChain->SetBranchAddress("NjS", &NjS, &b_NjS);
   fChain->SetBranchAddress("NjISR", &NjISR, &b_NjISR);
   fChain->SetBranchAddress("Is_2LNJ", &Is_2LNJ, &b_Is_2LNJ);
   fChain->SetBranchAddress("Is_1L1L", &Is_1L1L, &b_Is_1L1L);
   fChain->SetBranchAddress("Is_2L1L", &Is_2L1L, &b_Is_2L1L);
   fChain->SetBranchAddress("PTCM", &PTCM, &b_PTCM);
   fChain->SetBranchAddress("PTISR", &PTISR, &b_PTISR);
   fChain->SetBranchAddress("RISR", &RISR, &b_RISR);
   fChain->SetBranchAddress("cosCM", &cosCM, &b_cosCM);
   fChain->SetBranchAddress("cosS", &cosS, &b_cosS);
   fChain->SetBranchAddress("MISR", &MISR, &b_MISR);
   fChain->SetBranchAddress("dphiCMI", &dphiCMI, &b_dphiCMI);
   fChain->SetBranchAddress("dphiSI", &dphiSI, &b_dphiSI);
   fChain->SetBranchAddress("dphiISRI", &dphiISRI, &b_dphiISRI);
   fChain->SetBranchAddress("HN2S", &HN2S, &b_HN2S);
   fChain->SetBranchAddress("H11S", &H11S, &b_H11S);
   fChain->SetBranchAddress("HN1Ca", &HN1Ca, &b_HN1Ca);
   fChain->SetBranchAddress("HN1Cb", &HN1Cb, &b_HN1Cb);
   fChain->SetBranchAddress("H11Ca", &H11Ca, &b_H11Ca);
   fChain->SetBranchAddress("H11Cb", &H11Cb, &b_H11Cb);
   fChain->SetBranchAddress("cosC", &cosC, &b_cosC);
   fChain->SetBranchAddress("MZ", &MZ, &b_MZ);
   fChain->SetBranchAddress("MJ", &MJ, &b_MJ);
   fChain->SetBranchAddress("cosZ", &cosZ, &b_cosZ);
   fChain->SetBranchAddress("cosJ", &cosJ, &b_cosJ);
   fChain->SetBranchAddress("HLT_xe70", &HLT_xe70, &b_HLT_xe70);
   fChain->SetBranchAddress("DiElec_TrigMatched", &DiElec_TrigMatched, &b_DiElec_TrigMatched);
   fChain->SetBranchAddress("DiMuon_TrigMatched", &DiMuon_TrigMatched, &b_DiMuon_TrigMatched);
   fChain->SetBranchAddress("ElecMuon_TrigMatched", &ElecMuon_TrigMatched, &b_ElecMuon_TrigMatched);
   fChain->SetBranchAddress("HLT_e24_lhmedium_iloose_L1EM20VH", &HLT_e24_lhmedium_iloose_L1EM20VH, &b_HLT_e24_lhmedium_iloose_L1EM20VH);
   fChain->SetBranchAddress("HLT_e24_lhmedium_iloose_L1EM18VH", &HLT_e24_lhmedium_iloose_L1EM18VH, &b_HLT_e24_lhmedium_iloose_L1EM18VH);
   fChain->SetBranchAddress("HLT_e24_lhtight_iloose", &HLT_e24_lhtight_iloose, &b_HLT_e24_lhtight_iloose);
   fChain->SetBranchAddress("HLT_e26_lhtight_iloose", &HLT_e26_lhtight_iloose, &b_HLT_e26_lhtight_iloose);
   fChain->SetBranchAddress("HLT_e24_lhmedium_nod0_L1EM20VH", &HLT_e24_lhmedium_nod0_L1EM20VH, &b_HLT_e24_lhmedium_nod0_L1EM20VH);
   fChain->SetBranchAddress("HLT_e24_lhtight_nod0_ivarloose", &HLT_e24_lhtight_nod0_ivarloose, &b_HLT_e24_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("HLT_e60_lhmedium", &HLT_e60_lhmedium, &b_HLT_e60_lhmedium);
   fChain->SetBranchAddress("HLT_e60_lhmedium_nod0", &HLT_e60_lhmedium_nod0, &b_HLT_e60_lhmedium_nod0);
   fChain->SetBranchAddress("HLT_e140_lhloose_nod0", &HLT_e140_lhloose_nod0, &b_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("HLT_2e12_lhloose_L12EM10VH", &HLT_2e12_lhloose_L12EM10VH, &b_HLT_2e12_lhloose_L12EM10VH);
   fChain->SetBranchAddress("HLT_2e15_lhvloose_nod0_L12EM13VH", &HLT_2e15_lhvloose_nod0_L12EM13VH, &b_HLT_2e15_lhvloose_nod0_L12EM13VH);
   fChain->SetBranchAddress("HLT_2e17_lhloose_nod0", &HLT_2e17_lhloose_nod0, &b_HLT_2e17_lhloose_nod0);
   fChain->SetBranchAddress("HLT_2e17_lhloose", &HLT_2e17_lhloose, &b_HLT_2e17_lhloose);
   fChain->SetBranchAddress("HLT_mu26_imedium", &HLT_mu26_imedium, &b_HLT_mu26_imedium);
   fChain->SetBranchAddress("HLT_mu24_imedium", &HLT_mu24_imedium, &b_HLT_mu24_imedium);
   fChain->SetBranchAddress("HLT_mu24_iloose_L1MU15", &HLT_mu24_iloose_L1MU15, &b_HLT_mu24_iloose_L1MU15);
   fChain->SetBranchAddress("HLT_mu20_iloose_L1MU15", &HLT_mu20_iloose_L1MU15, &b_HLT_mu20_iloose_L1MU15);
   fChain->SetBranchAddress("HLT_mu50", &HLT_mu50, &b_HLT_mu50);
   fChain->SetBranchAddress("HLT_mu18_mu8noL1", &HLT_mu18_mu8noL1, &b_HLT_mu18_mu8noL1);
   fChain->SetBranchAddress("HLT_mu20_mu8noL1", &HLT_mu20_mu8noL1, &b_HLT_mu20_mu8noL1);
   fChain->SetBranchAddress("HLT_mu22_mu8noL1", &HLT_mu22_mu8noL1, &b_HLT_mu22_mu8noL1);
   fChain->SetBranchAddress("HLT_mu24_mu8noL1", &HLT_mu24_mu8noL1, &b_HLT_mu24_mu8noL1);
   fChain->SetBranchAddress("HLT_2mu10", &HLT_2mu10, &b_HLT_2mu10);
   fChain->SetBranchAddress("HLT_2mu14", &HLT_2mu14, &b_HLT_2mu14);
   fChain->SetBranchAddress("HLT_e17_lhloose_mu14", &HLT_e17_lhloose_mu14, &b_HLT_e17_lhloose_mu14);
   fChain->SetBranchAddress("HLT_e7_lhmedium_mu24", &HLT_e7_lhmedium_mu24, &b_HLT_e7_lhmedium_mu24);
   fChain->SetBranchAddress("HLT_e17_lhloose_nod0_mu14", &HLT_e17_lhloose_nod0_mu14, &b_HLT_e17_lhloose_nod0_mu14);
   fChain->SetBranchAddress("HLT_e24_lhmedium_L1EM20VHI_mu8noL1", &HLT_e24_lhmedium_L1EM20VHI_mu8noL1, &b_HLT_e24_lhmedium_L1EM20VHI_mu8noL1);
   Notify();
}

Bool_t AdelaideNtuple::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void AdelaideNtuple::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t AdelaideNtuple::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}

