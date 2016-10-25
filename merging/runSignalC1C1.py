import os


INPUT_PATH = "/home/assharma/compressed/CompressedAnalysis/Output/"


SIGNAL_LIST = [
"C1C1.392500",
"C1C1.392501",
"C1C1.392502",
"C1C1.392504",
"C1C1.392505",
"C1C1.392506",
"C1C1.392507",
"C1C1.392508",
"C1C1.392509",
"C1C1.392510",
"C1C1.392511",
"C1C1.392512",
"C1C1.392513",
"C1C1.392514",
"C1C1.392515",
"C1C1.392516",
"C1C1.392517",
"C1C1.392518",
"C1C1.392519",
"C1C1.392520",
"C1C1.392521"
]


for file in SIGNAL_LIST:

    file_fields=file.split(".")
    DSID=file_fields[2]

    command = "./susy " + INPUT_PATH + file + " " + "id_"+ DSID +" MC"
    print command
    os.system(command)
