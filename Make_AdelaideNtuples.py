#!/usr/bin/python

import sys, os, glob, string, shutil, os.path, fnmatch

inputPATH="/working/andreas/MLF/"
outputPATH="OutputNewcode/"

filterroot = '*.root'

counter=0

for dir in os.listdir(inputPATH):
	
	if "mc" not in dir: continue
	
	print "Searching directory: ", dir
	newpath = os.path.join(inputPATH,dir)
	os.chdir(newpath)
	com = "echo $PWD"
	os.system(com)
	for ifile in os.listdir(inputPATH+dir): 
		if fnmatch.fnmatch(ifile,filterroot):
			print "Found file: ", ifile, "\n"
			command = " /home/assharma/compressed/CompressedAnalysis/MakeCompressedHiggsinoNtuple.x -ifile="+inputPATH+dir+"/"+ifile+" -ofile=/home/assharma/compressed/CompressedAnalysis/"+outputPATH+"RJigsaw."+ifile
			os.system(command)

	os.chdir(inputPATH)

