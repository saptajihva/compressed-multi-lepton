import os


INPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/OutputNewcode/"
OUTPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/mergingNewcode/"

BKG_LIST = [
"341079",
"341080",
"341122",
"341155",
"341195",
"341206",
"341270",
"342178",
"342189",
"342284",
"342285"
]

command = "hadd "

command += " "+OUTPUT_PATH+ "Higgs.root"
 
for file in os.listdir(INPUT_PATH): 
	fieldsplit = file.split(".")
	ID = fieldsplit[2]
	if ID in BKG_LIST:
		command += " "+INPUT_PATH+file

  #  file_fields = file.split(".")
   # DSID=file_fields[1]

print command
os.system(command)

