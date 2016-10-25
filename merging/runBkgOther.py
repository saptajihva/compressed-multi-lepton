import os


INPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/OutputNewcode/"
OUTPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/mergingNewcode/"

BKG_LIST = [
"301535",
"301536",
"301890",
"301891",
"301892",
"301893",
"301894",
"301895",
"301896",
"301897",
"301898",
"301899",
"301900",
"301901",
"301902",
"301903",
"301904",
"301905",
"301906",
"301907"
]

command = "hadd "

command += " "+OUTPUT_PATH+ "Other.root"
 
for file in os.listdir(INPUT_PATH): 
	fieldsplit = file.split(".")
	ID = fieldsplit[2]
	if ID in BKG_LIST:
		command += " "+INPUT_PATH+file

  #  file_fields = file.split(".")
   # DSID=file_fields[1]

print command
os.system(command)

