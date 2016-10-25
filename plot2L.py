import os.path, sys
from rootpy.plotting import F1, Hist, HistStack, Canvas,Legend,Pad
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
style.SetPadTopMargin(0.0)
#style.SetPadRightMargin(0.05)
style.SetPadBottomMargin(0.2)
#style.SetPadLeftMargin(0.15)
set_style(style)

labelmargin=0.20 #Labeling

#==================== EDIT THESE ========================#
lumipb = 12300 #pb-1 (10 fb-1)
lumifb = lumipb/1000.0
sqrts  = 13
signalprocess= 'Two Lepton'
signaljets=" with ISR "

yminimum = 1e0
ymaximum = 1e4

#jetcut_switch = True

color_list = ('dimgray','mediumpurple','lightsteelblue','goldenrod','mistyrose','skyblue','tomato','darkseagreen','floralwhite')
linestyle_list = ('solid','longdash','dotted','dashed','dashdot','verylongdashdot','longdashdotdotdot')


#==================== Input Files =======================# 

backgroundMC_location= str(sys.argv[1])
signalMC_location ="signal"
data_location="data"

dataexist = os.path.isfile("data.txt")
signalexist = os.path.isfile("signals.txt")
backgroundexist = os.path.isfile("backgrounds.txt")

if backgroundexist is True: background_list_file = "backgrounds.txt"
if signalexist is True: signal_list_file="signals.txt"
if dataexist is True: data_list_file = "data.txt"

variable_list_file = "variablelist_2lep.txt"



#==================== LOAD FILES ============================#

with open(variable_list_file) as f:
    input                 = zip(*[line.split() for line in f])
    variable_list         = input[0]
    xmin_list             = input[1]
    xmax_list             = input[2]
    nbins_list            = input[3]
    xtitle_list           = input[4]
    ytitle_list           = input[5]

    print variable_list
    print xtitle_list
    print ytitle_list

if backgroundexist is True:
	with open(background_list_file) as f:
    		input                 = zip(*[line.split() for line in f])
    		background_list       = input[0]
    		background_names_list = input[1]
    		background_bool_list  = input[2]

	print background_list 
	print background_names_list
#	print background_bool_list

if signalexist is True:
	with open(signal_list_file) as f:
    		input                 = zip(*[line.split() for line in f])
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
    
cut    = Cut("(Is_1L1L==1 || Is_2LNJ==1) && Is_OS==1")
cut2 = Cut("dphiISRI>0")
cut3 = Cut("pT_1lep>0")
cut4 = Cut("pT_2lep>0")
cut5 = Cut("PTISR>200")
weight = Cut("weight*(13.3/1000)")
#weight wweight*13.3/1000
total = (cut & cut3 & cut4 & cut5 & weight)
print total
#outputfolder ="outputfolder"
outputfolder = str(sys.argv[2])
print outputfolder
#jetcut = Cut("nJets[0] == 0")

#sign = lambda a: (a>0) - (a<0)



#if jetcut_switch:
#    cut = Cut("nJets[0] == 0")
#    jetcut_latex="N_{Jets} = 0"
#    outputfolder="datamc_cuts"
#else:
#    jetcut_latex = "N_{Jets} #geq 0"
#    signaljets=""
#    outputfolder="Xjets"

#bg_scaled_cut = Cut("1")#Cut("pileupWeight*normweight*mcEventWeight*"+str(lumipb)) * cut  
#top_cutfix    =  bg_scaled_cut

#WW_cutfix     = Cut("mcChannelNumber!=361068") * bg_scaled_cut


#==================== BEGINS ================================#


for (variable,xmin,xmax,nbins,xtitle,ytitle) in zip(variable_list,xmin_list,xmax_list,nbins_list,xtitle_list,ytitle_list):
    # Canvas Variables and declaration
    canvas = Canvas(width=700,height=500)
    bottom_padmargin = 0.0
    left_padmargin   = 0.0
    right_padmargin  = 0.0
    pad    = Pad(left_padmargin,0.15-bottom_padmargin,1-right_padmargin,0.95)
#    pad.SetTopMargin(0.2)
    pad.Draw()
    pad.cd()
    #if variable != 'RISR':
	#pad.SetLogy()
    pad.SetLogy()
    pad.SetGrid()

#    pad    = Canvas(0,0.3,1,1)
    

##### KEEP THIS 
#    canvas.Divide(1, 2)


#    pad = canvas.cd(1)

#    pad.cd()
#    pad.SetLogy()
#    pad.SetGrid()


#############################
    stack = HistStack()
    stack.SetMinimum(yminimum)
    #stack.SetMaximum(ymaximum)


    #============================= LEGEND DEFINITION ================================#
    legend_entries=len(background_list) #figure out how to remove this magic number

    margin      = 0.30
    rightmargin = 0.02
    topmargin   = 0.02
    entryheight = 0.05
    entrysep    = 0.005
    legend = Legend(legend_entries, leftmargin  = 1-margin-5*rightmargin, 
                                      topmargin   = topmargin           ,
                                      rightmargin = rightmargin         ,
                                      entryheight = entryheight         ,
                                      entrysep    = entrysep            ,
                                      margin      = margin              ,
                                      textfont    = None             ,
                                      textsize    = 10,#entryheight         ,
                                      header      = None                )
    legend.SetLineColor(0)


    #=================== BACKGROUNDS ====================================#
    for (rootfile,background_name,color,bg_bool) in zip(background_list,background_names_list, color_list,background_bool_list):
        if bg_bool == "Plot":
            background = root_open(backgroundMC_location + "/" + rootfile)
            compressed    = background.CompressedAnalysis
            print compressed
	    #if variable == "RISR":
	#	    normal = compressed.GetEntries(total)
	#	    isrcut = Cut("1/normal")
	#	    weight = weight & isrcut
            histname = "hist" + rootfile
            histogram = histname +"(" +nbins + "," + xmin + "," + xmax + ")"


            histname = compressed.Draw(variable + ">>" + histogram, selection = total, #& weight   ,
                                                                             drawstyle = 'hist'  ,
                                                                             fillstyle = 'solid' ,
                                                                             linecolor = 'black',
                                                                             fillcolor = color)
            print histname
            print background_name
            legend.AddEntry(histname,label= background_name, style='F') #was label=background_name
            stack.Add(histname)


    
    #=================== DATA SAMPLES ====================================# 
#    objects     = []
#    dataobjects = []
#    for (datafilename,data_weight,data_bool) in zip(data_list,data_weight_list,data_bool_list):
#        print datafilename,data_weight,data_bool
#        if data_bool == "Plot":
#            print "datafilename: ", datafilename
#            data=root_open(data_location + "/" + datafilename)
#            treesSR = data.trees_SR_
#            datacut = cut 
#           if data_weight != "1":
#                print "WARNING: DATA WEIGHT IS NOT 1 PLEASE CHECK IF YOU DO NOT INTEND TO WEIGHT THE DATA"
#
#            histogram ="hist("+ nbins+ "," +xmin + "," + xmax + ")"
#            datahist = treesSR.Draw(variable + ">>"+ histogram,selection =datacut)
#            dataobjects.append(datahist)


    #=================== SIGNAL SAMPLES ==================================# 
 #   for (signalfilename,xs,k,efilter,nMC,legend_latex,plotbool) in zip(signal_list,xs_list,k_list,efilter_list,nMC_list,signal_legend_list,bool_list):   
#        if plotbool == "Plot" :
#            signal=root_open(signalMC_location + "/" +signalfilename)
#
#            treesSR = signal.trees_SR_
#            signalcut = Cut(xs+"*" + efilter + "*" + k + "*" + str(lumifb) + "*mcEventWeight/" + nMC) * cut
#            histname = "hist" + signalfilename
#            histogram = histname + "(" + nbins + "," + xmin + "," + xmax + ")"
#            hist = treesSR.Draw(variable + ">>" + histogram,selection = signalcut, drawstyle="hist")

#            objects.append(hist)
     


    #=================== DRAW STACK ====================================# 
    stack.Draw()

    stack.xaxis.SetTitle(xtitle)
    stack.yaxis.SetTitle(ytitle)

   
    #=================== DRAW DATA ====================================# 
#    for (dataobject,data_legend_latex) in zip(dataobjects,data_legend_list):
 #       legend.AddEntry(dataobject, label = data_legend_latex)
#        dataobject.Draw("same X0")
#    
    #=================== DRAW SIGNALS ====================================# 
#    for (object,legend_latex,linestyle) in zip(objects,signal_legend_list,linestyle_list):
#        object.SetLineColor("black")
#        object.SetLineWidth(3)
#        object.SetLineStyle(linestyle)
#        legend.AddEntry(object,label = legend_latex,style='L')
#        object.Draw("same X0")
                                     
        
    #legend.Draw()

  #  plottitle = ROOT.TLatex(labelmargin,0.92,'SR 2L w CUTS')
  #  plottitle.SetTextFont(43)
  #  plottitle.SetTextSize(24)
  #  plottitle.SetNDC()
  #  plottitle.Draw()

#    label = ROOT.TLatex(0.5, 0, '#sqrt{s} = ' + str(sqrts) + ' TeV, #int L dt = ' + str(lumifb) + ' fb^{-1}')
#    label.SetTextFont(43)
#    label.SetTextSize(18)
#    label.SetNDC()
#    label.Draw()

    label2 = ROOT.TLatex(.4, 0.1, signalprocess + signaljets)
    label2.SetTextFont(43)
    label2.SetTextSize(18)
    label2.SetNDC()
    label2.Draw()

#    label3 = ROOT.TLatex(labelmargin,0.92,"CompressedMultiTree" )
#    label3.SetTextFont(43)
#    label3.SetTextSize(18)
#    label3.SetNDC()
#    label3.Draw()

#    pad.xaxis.Set
#    pad.xaxis.SetTextSize(0)
#    tick_length_pixels(pad, xaxis, yaxis, xlength, ylength=None)
    stack.xaxis.set_label_size(15)
    stack.yaxis.set_label_size(20)
    #stack.yaxis.getTitle().Center()
    stack.xaxis.SetTitle(xtitle)
   # stack.xaxis.getTitle().Center()
    legend.Draw()
    pad.Modified()
    pad.Update()


    canvas.Modified()
    canvas.Update()

    #canvas.cd()
    #pad2    = Pad(left_padmargin,0.0,1-right_padmargin,0.3)
    #pad2.SetBottomMargin(0.4)
    #pad2.SetTopMargin(0.05)
 #   pad2.xaxis.SetTextSize(10)
    #pad2.Draw()
    #pad2.cd()
    #pad2.SetGrid()




#    dataobject.SetMinimum(0.0001)
#    dataobject.SetMaximum(2)
#    dataobject.xaxis.SetTextSize(10)

#    dataobject.xaxis.SetTitle(xtitle)
#    dataobject.yaxis.SetTitle("Data/MC")

#    dataobject.yaxis.divisions = 5
    
#    dataobject.Divide(sum(stack))
##    dataobject.xaxis.getTitle().Center()
#    dataobject.xaxis.set_label_size(25)
#    dataobject.yaxis.set_label_size(25)

#    object.SetLineColor("black")
#    dataobject.SetLineWidth(0)
#    dataobject.drawstyle = "hist"
#    dataobject.SetLineStyle(linestyle)
#    dataobject.SetFillColor("goldenrod")
    #dataobject.set
#    dataobject.Draw()
 


    #pad2.Modified()
    #pad2.Update()
    




    canvas.Print(outputfolder +  variable + "2L.png")



