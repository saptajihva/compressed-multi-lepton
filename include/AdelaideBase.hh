//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jul 20 03:09:52 2016 by ROOT version 6.04/14
// from TTree Nominal/Nominal
// found on file: /data/jack/ICHEP/MultiLepton/ichep_multilep/user.apetrid.00282625.physics_Main.SUSY2.p2667.MLF_v04b_output.root/user.apetrid.8962123._000001.output.root
//////////////////////////////////////////////////////////

#ifndef AdelaideBase_h
#define AdelaideBase_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"

using namespace std;

class AdelaideBase {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain
   
// Fixed size dimensions of array or collections stored in the TTree if any.
   // Declaration of leaf types
   ULong64_t       EventNumber;
   UInt_t          RunNumber;
   UInt_t          LumiBlockNumber;
   Double_t        xsec;
   vector<float>   *jet_pt;
   vector<float>   *jet_eta;
   vector<float>   *jet_phi;
   vector<float>   *jet_m;
   vector<bool>    *jet_isBtag;
   vector<float>   *jet_BtagWeight;
   vector<float>   *lepton_eta;
   vector<float>   *lepton_pt;
   vector<float>   *lepton_m;
   vector<float>   *lepton_phi;
   vector<int>     *lepton_charge;
   vector<bool>    *lepton_isSignal;
   vector<bool>    *lepton_isMedium;
   vector<bool>    *lepton_isTight;
   vector<bool>    *lepton_isLooseIso;
   vector<bool>    *lepton_isMediumIso;
   vector<bool>    *lepton_isTightIso;
   vector<float>   *lepton_d0sig;
   vector<float>   *lepton_z0;
   vector<int>     *lepton_origin;
   vector<int>     *lepton_type;
   Float_t         EtMiss_Phi;
   Float_t         EtMiss;
   Float_t         EtMissTST_Phi;
   Float_t         EtMissTST;
   Float_t         elSF_weight;
   Float_t         muSF_weight;
   Float_t         trigSF_weight;
   Float_t         bTagSF_weight;
   Float_t         pileUp_weight;
   Float_t         sherpaVjets_weight;
   ULong64_t       PRWHash;
   UInt_t          PRWRndNumber;
   Float_t         gen_weight;
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
   TBranch        *b_EventNumber;   //!
   TBranch        *b_RunNumber;   //!
   TBranch        *b_LumiBlock;   //!
   TBranch        *b_xsec;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_phi;   //!
   TBranch        *b_jet_m;   //!
   TBranch        *b_jet_isBtag;   //!
   TBranch        *b_jet_BtagWeight;   //!
   TBranch        *b_lepton_eta;   //!
   TBranch        *b_lepton_pt;   //!
   TBranch        *b_lepton_m;   //!
   TBranch        *b_lepton_phi;   //!
   TBranch        *b_lepton_charge;   //!
   TBranch        *b_lepton_isSignal;   //!
   TBranch        *b_lepton_isMedium;   //!
   TBranch        *b_lepton_isTight;   //!
   TBranch        *b_lepton_isLooseIso;   //!
   TBranch        *b_lepton_isMediumIso;   //!
   TBranch        *b_lepton_isTightIso;   //!
   TBranch        *b_lepton_d0sig;   //!
   TBranch        *b_lepton_z0;   //!
   TBranch        *b_lepton_origin;   //!
   TBranch        *b_lepton_type;   //!
   TBranch        *b_EtMiss_Phi;   //!
   TBranch        *b_EtMiss;   //!
   TBranch        *b_EtMissTST_Phi;   //!
   TBranch        *b_EtMissTST;   //!
   TBranch        *b_elSF_weight;   //!
   TBranch        *b_muSF_weight;   //!
   TBranch        *b_trigSF_weight;   //!
   TBranch        *b_bTagSF_weight;   //!
   TBranch        *b_pileUp_weight;   //!
   TBranch        *b_sherpaVjets_weight;   //!
   TBranch        *b_PRWHash;   //!
   TBranch        *b_PRWRndNumber;   //!
   TBranch        *b_gen_weight;   //!
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

   AdelaideBase(TTree *tree=0);
   virtual ~AdelaideBase();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

inline AdelaideBase::AdelaideBase(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/data/jack/ICHEP/MultiLepton/ichep_multilep/user.apetrid.00282625.physics_Main.SUSY2.p2667.MLF_v04b_output.root/user.apetrid.8962123._000001.output.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/data/jack/ICHEP/MultiLepton/ichep_multilep/user.apetrid.00282625.physics_Main.SUSY2.p2667.MLF_v04b_output.root/user.apetrid.8962123._000001.output.root");
      }
      f->GetObject("Nominal",tree);

   }
   Init(tree);
}

inline AdelaideBase::~AdelaideBase()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

inline Int_t AdelaideBase::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
inline Long64_t AdelaideBase::LoadTree(Long64_t entry)
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

inline void AdelaideBase::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   jet_pt = 0;
   jet_eta = 0;
   jet_phi = 0;
   jet_m = 0;
   jet_isBtag = 0;
   jet_BtagWeight = 0;
   lepton_eta = 0;
   lepton_pt = 0;
   lepton_m = 0;
   lepton_phi = 0;
   lepton_charge = 0;
   lepton_isSignal = 0;
   lepton_isMedium = 0;
   lepton_isTight = 0;
   lepton_isLooseIso = 0;
   lepton_isMediumIso = 0;
   lepton_isTightIso = 0;
   lepton_d0sig = 0;
   lepton_z0 = 0;
   lepton_origin = 0;
   lepton_type = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("LumiBlockNumber", &LumiBlockNumber, &b_LumiBlock);
   fChain->SetBranchAddress("xsec", &xsec, &b_xsec);
   fChain->SetBranchAddress("jet_pt", &jet_pt, &b_jet_pt);
   fChain->SetBranchAddress("jet_eta", &jet_eta, &b_jet_eta);
   fChain->SetBranchAddress("jet_phi", &jet_phi, &b_jet_phi);
   fChain->SetBranchAddress("jet_m", &jet_m, &b_jet_m);
   fChain->SetBranchAddress("jet_isBtag", &jet_isBtag, &b_jet_isBtag);
   fChain->SetBranchAddress("jet_BtagWeight", &jet_BtagWeight, &b_jet_BtagWeight);
   fChain->SetBranchAddress("lepton_eta", &lepton_eta, &b_lepton_eta);
   fChain->SetBranchAddress("lepton_pt", &lepton_pt, &b_lepton_pt);
   fChain->SetBranchAddress("lepton_m", &lepton_m, &b_lepton_m);
   fChain->SetBranchAddress("lepton_phi", &lepton_phi, &b_lepton_phi);
   fChain->SetBranchAddress("lepton_charge", &lepton_charge, &b_lepton_charge);
   fChain->SetBranchAddress("lepton_isSignal", &lepton_isSignal, &b_lepton_isSignal);
   fChain->SetBranchAddress("lepton_isMedium", &lepton_isMedium, &b_lepton_isMedium);
   fChain->SetBranchAddress("lepton_isTight", &lepton_isTight, &b_lepton_isTight);
   fChain->SetBranchAddress("lepton_isLooseIso", &lepton_isLooseIso, &b_lepton_isLooseIso);
   fChain->SetBranchAddress("lepton_isMediumIso", &lepton_isMediumIso, &b_lepton_isMediumIso);
   fChain->SetBranchAddress("lepton_isTightIso", &lepton_isTightIso, &b_lepton_isTightIso);
   fChain->SetBranchAddress("lepton_d0sig", &lepton_d0sig, &b_lepton_d0sig);
   fChain->SetBranchAddress("lepton_z0", &lepton_z0, &b_lepton_z0);
   fChain->SetBranchAddress("lepton_origin", &lepton_origin, &b_lepton_origin);
   fChain->SetBranchAddress("lepton_type", &lepton_type, &b_lepton_type);
   fChain->SetBranchAddress("EtMiss_Phi", &EtMiss_Phi, &b_EtMiss_Phi);
   fChain->SetBranchAddress("EtMiss", &EtMiss, &b_EtMiss);
   fChain->SetBranchAddress("EtMissTST_Phi", &EtMissTST_Phi, &b_EtMissTST_Phi);
   fChain->SetBranchAddress("EtMissTST", &EtMissTST, &b_EtMissTST);
   fChain->SetBranchAddress("elSF_weight", &elSF_weight, &b_elSF_weight);
   fChain->SetBranchAddress("muSF_weight", &muSF_weight, &b_muSF_weight);
   fChain->SetBranchAddress("trigSF_weight", &trigSF_weight, &b_trigSF_weight);
   fChain->SetBranchAddress("bTagSF_weight", &bTagSF_weight, &b_bTagSF_weight);
   fChain->SetBranchAddress("pileUp_weight", &pileUp_weight, &b_pileUp_weight);
   fChain->SetBranchAddress("sherpaVjets_weight", &sherpaVjets_weight, &b_sherpaVjets_weight);
   fChain->SetBranchAddress("PRWHash", &PRWHash, &b_PRWHash);
   fChain->SetBranchAddress("PRWRndNumber", &PRWRndNumber, &b_PRWRndNumber);
   fChain->SetBranchAddress("gen_weight", &gen_weight, &b_gen_weight);
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

inline Bool_t AdelaideBase::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

inline void AdelaideBase::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
inline Int_t AdelaideBase::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
