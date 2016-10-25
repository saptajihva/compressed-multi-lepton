import os


INPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/OutputNewcode/"
OUTPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/mergingNewcode/"


BKG_LIST = [
"304414",
"410009",
"410011",
"410012",
"410015",
"410016",
"410025",
"410026",
"410050",
"410066",
"410067",
"410068",
"410080",
"410081",
"410111",
"410112",
"410113",
"410114",
"410115",
"410116",

]

command = "hadd "
command += " "+OUTPUT_PATH+ "Top.root"

for file in os.listdir(INPUT_PATH):
    file_fields = file.split(".")
    DSID=file_fields[2]
    if DSID in BKG_LIST:
	    command += " " + INPUT_PATH + file 
print command
os.system(command)
