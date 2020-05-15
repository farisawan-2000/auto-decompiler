import sys, os, subprocess, re
import argparse
import pathlib


if len(sys.argv) != 3:
	print("Usage: python3 AutoSplitter2.py (ASM File) (Location of non-matchings folder)")

def getFileName(_file):
	return _file.split('/')[-1].split('.')[0]

def getNewFunc(_fileName):
	proc = subprocess.Popen("./mips_to_c/mips_to_c.py --no-andor "+_fileName+" "+getFileName(_fileName),
		shell=True,
		stdout=subprocess.PIPE)
	toReturn = proc.communicate()
	return toReturn[0].decode("ascii")

iFile = sys.argv[1]
non_matchings = sys.argv[2]
print(non_matchings+"/"+getFileName(iFile)+"/")
pathlib.Path(non_matchings+"/"+getFileName(iFile)+"/").mkdir(parents=True, exist_ok=True)

# Pass 0.5: read file

tmp = open(iFile, "r")
fileBuffer = tmp.readlines()
tmp.close()
# print(fileBuffer[1:5])

funcReference = {}

# Pass 1: Populate data structure

lineNum = 0
gotFirstFunc = 0
lineCache = 0
currFunc = ""
tmp = open(iFile, "r")
for line in tmp:
	# print(line)
	if "glabel" in line and "D_" not in line and "L8" not in line:
		funcName = line.split()[-1]
		if gotFirstFunc == 1:
			funcReference[currFunc] = [lineCache, lineNum - 1]
			lineCache = lineNum
			currFunc = funcName
		else:
			lineCache = lineNum
			gotFirstFunc = 1
			currFunc = funcName
	lineNum+=1

# print(funcReference)

global_asm_reference = {}

# Pass 2: Write to files
for sym in funcReference:
	global_asm_reference[sym] = non_matchings+"/"+getFileName(iFile)+"/"+sym+".s"
	oFile = open(global_asm_reference[sym],"w+")
	oFile.write(''.join(fileBuffer[funcReference[sym][0]:funcReference[sym][1]]))
	oFile.close()

# Pass 3: Create C file

outFile = sys.argv[1].split(".s")[0]+".c"
outFile = outFile.split("asm")[0] + "src" + outFile.split("asm")[1]
print(outFile)

cFile = open(outFile, "w+")
cFile.write("#include <ultra64.h>\n")
cFile.write("#include <macros.h.h>\n")
for sym in funcReference:
	cFile.write("\n#ifdef MIPS_TO_C\n")
	cFile.write(getNewFunc(global_asm_reference[sym]))
	cFile.write("#else\n")
	cFile.write("GLOBAL_ASM(\""+global_asm_reference[sym]+"\")\n")
	cFile.write("#endif\n")

cFile.close()