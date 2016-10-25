import os


INPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/OutputNewcode/"
OUTPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/mergingNewcode/"

BKG_LIST = [
"361084",
"361086",
"361091",
"361093",
"361094",
"361096"
]

min = "361063"
max = "361096"

command = "hadd "

command += " "+OUTPUT_PATH+ "Diboson.root"
 
for file in os.listdir(INPUT_PATH): 
	fieldsplit = file.split(".")
	ID = fieldsplit[2]
	if ID>=min and ID<=max :
		command += " "+INPUT_PATH+file

  #  file_fields = file.split(".")
   # DSID=file_fields[1]

print command
os.system(command)

