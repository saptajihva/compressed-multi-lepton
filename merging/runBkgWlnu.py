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

min1 = "363436"
max1 = "363483"
min2 = "363336"
max2 = "363354"
command = "hadd "

command += " "+OUTPUT_PATH+ "Wlnu.root"
 
for file in os.listdir(INPUT_PATH): 
	fieldsplit = file.split(".")
	ID = fieldsplit[2]
	if (ID>=min1 and ID<=max1) or (ID>=min2 and ID<=max2):
		command += " "+INPUT_PATH+file

  #  file_fields = file.split(".")
   # DSID=file_fields[1]

print command
os.system(command)

