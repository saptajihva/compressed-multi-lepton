import os


INPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/OutputNewcode/"
OUTPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/mergingNewcode/"

BKG_LIST = [
"363388",
"363389",
"363390",
"363391",
"363392",
"363393",
"363394",
"363395",
"363396",
"363397",
"363398",
"363399",
"363400",
"363401",
"363402",
"363403",
"363404",
"363405",
"363406",
"363407",
"363408",
"363409",
"363410",
"363411",
"363364",
"363365",
"363366",
"363367",
"363368",
"363369",
"363370",
"363371",
"363372",
"363373",
"363374",
"363375",
"363376",
"363377",
"363378",
"363379",
"363380",
"363381",
"363382",
"363383",
"363384",
"363385",
"363386",
"363387"
]

min1 = "363102" 
max1 = "363122"
min2 = "363361"
max2 = "363411"

command = "hadd "
command += " "+OUTPUT_PATH+"Zll.root"

for file in os.listdir(INPUT_PATH):
    file_fields = file.split(".")
    DSID=file_fields[2]
    if (DSID>= min1 and DSID<=max1) or (DSID>= min2 and DSID<=max2):
        command += " " + INPUT_PATH + file
print command
os.system(command)
