import os.path
from rootpy.plotting import F1, Hist, Hist2D, HistStack, Canvas,Legend,Pad
from rootpy.plotting.utils import draw
#from rootpy.interactive import wait
from rootpy.io import root_open
from rootpy.tree import Cut
from rootpy.plotting.style import get_style, set_style
from decimal import Decimal
import ROOT
style = get_style('ATLAS')
style.SetEndErrorSize(3)
titlesize=25
style.SetTitleSize(titlesize, "x")
style.SetTitleSize(titlesize,"y")
style.SetTitleYOffset(1)
#style.SetTitleXOffset(3)
#style.SetPadTopMargin(0.0)
#style.SetPadRightMargin(0.05)
#style.SetPadBottomMargin(0.2)
#style.SetPadLeftMargin(0.15)
set_style(style)

labelmargin=0.20 #Labeling

#==================== EDIT THESE ========================#
lumipb = 12300 #pb-1 (10 fb-1)
lumifb = lumipb/1000.0
sqrts  = 13
signalprocess= 'Two Lepton'
signaljets="with ISR "

yminimum = 1e0
ymaximum = 1e4

#jetcut_switch = True

color_list = ('crimson','dimgray','lightsteelblue','goldenrod','mediumpurple','mistyrose','skyblue','tomato','darkseagreen','floralwhite')
linestyle_list = ('solid','longdash','dotted','dashed','dashdot','verylongdashdot','longdashdotdotdot')


#==================== Input Files =======================# 

backgroundMC_location="merging"
signalMC_location ="signal"
data_location="data"

dataexist = os.path.isfile("data.txt")
signalexist = os.path.isfile("signals.txt")
backgroundexist = os.path.isfile("backgrounds.txt")

if backgroundexist is True: background_list_file = "backgrounds.txt"
if signalexist is True: signal_list_file="signals.txt"
if dataexist is True: data_list_file = "data.txt"

variable_list_file = "variablelist_2D.txt"
xvariable_list_file = "xvariablelist_2D.txt"

#==================== LOAD FILES ============================#

with open(xvariable_list_file) as f:
    input               = zip(*[line.split() for line in f])
    xvariable_list      = input[0]
    xmin_list           = input[1]
    xmax_list           = input[2]
    xnbins_list         = input[3]
    xtitle_list         = input[4]
    xytitle_list        = input[5]

with open(variable_list_file) as f:
    input                 = zip(*[line.split() for line in f])
    variable_list         = input[0]
    min_list             = input[1]
    max_list             = input[2]
    nbins_list            = input[3]
    title_list           = input[4]
    ytitle_list           = input[5]
    print variable_list
    print title_list
    print ytitle_list

if backgroundexist is True:
    with open(background_list_file) as f:
        input                 = zip(*[line.split() for line in f])
        background_list       = input[0]
        background_names_list = input[1]
        background_bool_list  = input[2]
        print background_list
        print background_names_list
        #       print background_bool_list

if signalexist is True:
    with open(signal_list_file) as f:
        input = zip(*[line.split() for line in f])
        signal_list           = input[0]
        xs_list               = input[1]
        k_list                = input[2]
        efilter_list          = input[3]
        nMC_list              = input[4]
        signal_legend_list    = input[5]
        bool_list             = input[6]

if dataexist is True:
    with open(data_list_file) as f:
        input                 = zip(*[line.split() for line in f])
        data_list             = input[0]
        data_weight_list      = input[1]
        data_legend_list      = input[2]
        data_bool_list        = input[3]

#====================== CUT DEFINITION ======================#

cut    = Cut("Is_1L1L==1")
cut2 = Cut("dphiISRI>0")
cut3 = Cut("pT_1lep>0")
cut4 = Cut("pT_2lep>0")
cut5 = Cut("MET>100")
weight = Cut("weight")
total = (cut & cut2 & cut3 & cut4 & cut5 )
print total
outputfolder ="output2D"


for (rootfile,background_name,bg_bool) in zip(background_list,background_names_list,background_bool_list):
    if bg_bool== "Plot":
        background = root_open(backgroundMC_location + "/" + rootfile)
        compressed    = background.CompressedAnalysis
        for (variable,min,max,nbins,title,ytitle) in zip(variable_list,min_list,max_list,nbins_list,title_list,ytitle_list):
            print variable + " " + min + " " + max + " " + nbins + " " + title + " " + ytitle  
            for(xvariable,xmin,xmax,xnbins,xtitle,xytitle) in zip(xvariable_list,xmin_list,xmax_list,xnbins_list,xtitle_list,xytitle_list):
             
                  # Canvas Variables and declaration
                print xvariable + " " + xmin + " " + xmax + " " + xnbins + " " + xtitle + " " + xytitle  
                canvas = Canvas(width=700,height=500)
                               
                #    pad.SetTopMargin(0.2)
                canvas.Draw()
                

                #canvas.SetLogy()
                canvas.SetGrid()

                histname = "hist" + variable+"_"+xvariable +background_name 
                print histname
                histogram = histname + "(" + xnbins + "," + xmin +"," + xmax + "," + nbins + "," + min +"," + max +  ")"
                print histogram
                histname = compressed.Draw(xvariable+":"+variable + ">>" + histogram, selection = total & weight, drawstyle='COLZ')
                histname.SetTitle(background_name)
                #histname.zaxis.SetTitle(
                histname.xaxis.SetTitle(xtitle)
                histname.yaxis.SetTitle(title)
                histname.xaxis.set_label_size(15)
                histname.yaxis.set_label_size(20)
                canvas.Update()
                canvas.Print(outputfolder + "/" + xvariable + "_" + variable + background_name +"2L.png")



