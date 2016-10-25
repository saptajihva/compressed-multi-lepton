import os


INPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/OutputNewcode/"
OUTPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/mergingNewcode/"

BKG_LIST = [
"361063",
"361064",
"361065",
"361066",
"361067",
"361068",
"361071",
"361072",
"361073",
"361077"
]

MinTag = "361620"
MaxTag = "361627"

command = "hadd "

command += " "+OUTPUT_PATH+ "Triboson.root"
 
for file in os.listdir(INPUT_PATH): 
	fieldsplit = file.split(".")
	ID = fieldsplit[2]
	if ID>=MinTag and ID<=MaxTag:
		command += " "+INPUT_PATH+file

  #  file_fields = file.split(".")
   # DSID=file_fields[1]

print command
os.system(command)

