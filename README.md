# compressed-multi-lepton 
Analysis framework for LHC searches for new particles decaying to massive weakly interacting particle(s) in the "compressed" mass-spectra regime
This package is based on Chris Rogan's CompressedAnalysis, available from https://github.com/crogan/CompressedAnalysis

## Installing and Setting Up RestFrames
This package depends on the external code package RestFrames.

To run this package, you first need to download and install RestFrames:

* Go to the directory where you want to install RestFrames and download the git repository

  `<cmdline> git clone https://github.com/crogan/RestFrames`

* Change directories to newly created RestFrames
  
  `<cmdline> cd RestFrames`

* Configure and build the package
  + configure step (`--prefix` flag indicates where package is installed)

     `<cmdline> ./configure --prefix=$PWD`
  + make step
  
     `<cmdline> make`
  + install step
  
     `<cmdline> make install`

In addition to installing RestFrames, you need to set your environment paths to be able to see the RestFrames header files, shared library, etc. If `--prefix` was set to a directory already in your PATH (ex. /usr/local, which is the default) you've likely accomplished this already. If not, the RestFrames install step above also creates files `setup_RestFrames.(c)sh` which can be used at the start of a terminal session to add the approprate directories to your environment paths

* `<cmdline> cd RestFrames`
* `<cmdline> source setup_RestFrames.sh`


##compressed-multi-lepton modification instructions:

1. Install RestFrames and do

source /path/to/RestFrames/setup_RestFrames.sh (or .csh if you are so inclined)

One can also put the above into .bash_profile

2. Download package from github, and make sure both RestFrames and ROOT are sourced.

3. To make a minimal instance of the RJigsaw ntuple maker, just type make in the CompressedAnalysis directory.

4. Adding a new type of input ntuple goes like this-
a. Load the ntuple with ROOT

root -l

TFile f("/path/to/file/file.root")

b. Take a look at the TTree we want RJigsawed using .ls() (in this case TTree is called Foo)

f.ls()

c. Use MakeClass to generate a skeleton analysis

Foo->MakeClass("FooBase")

d. Now we should have 2 files FooBase.C, and the header FooBase.h. FooBase.C is pretty useless, but FooBase.h will be required.

e. There is a line in the header file which says #ifdef Foobase_cxx which needs to be removed, along with the #endif // #ifdef FooBase_cxx at the end of the file. This allows us to call this header from wherever we want. 

f. Now we need to overload the AnalysisBase.cc functions with what our input
files require. Examples include GetLeptons, GetJets etc.

g. Set the structure of your new ntuple in the
CompressedHiggsinoNtupleMultiTree.cc (InitOutputTree), as well as any other selection
criteria you want to apply before doing RJigsaw to the input events
(FillOutputTree). 

h. Modify the header CompressedHiggsinoNtupleMultiTree.hh with the variables you want to fill.

i. Make sure that all of the templates are overloaded to FooBase! Also make
sure the headers all referce properly up the chain from
MakeCompressedHiggsinoNtuple to CompressedHiggsinoNtupleMultitree, to all the
of the bases required.

5. Modify the Makefile if needed and make the executable.

6. The useage can take files (-ifile=), lists (-ilist=), and folders (-ifold=) as input, and you need to specify an output file name (-ofile=)

./MakeCompressedHiggsinoNtuple.x -ifile=CompressedMC.root
-ofile=RJigsawCompressed.root

 
