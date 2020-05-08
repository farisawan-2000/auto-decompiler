import sys, os, subprocess, glob, re

def splitFunc(lineStart, lineEnd, fileName, oFile):
	subprocess.call("sed -n "+str(lineStart)+","+str(lineEnd)+"p "+fileName+" > "+oFile, shell=True)

def splitFunc2(lineStart, lineEnd, fileName, oFile):
	subprocess.call("sed -n "+str(lineStart)+","+str(lineEnd)+"p "+fileName+" >> "+oFile, shell=True)

def getFileName(_file):
	return _file.split('/')[-1].split('.')[0]

def getFuncName(_file):
	myName = _file.split('/')[-1].split('.')[0]
	return "code_"+myName.split("_")[1]

sFiles = [i for i in glob.glob(sys.argv[1]+"/asm/*.s") if 'code' in i]
# print(sFiles)

for i in sFiles:
	name = getFileName(i)
	os.system("mkdir -p "+sys.argv[1]+"/asm/non_matchings/"+name)

symReference = {}
lastSymInFile = []
curr_sym = ""
sectionStart = 0
jrraCounter = -1
fileStartAddr = ""
gotFirstFunc = 0
myRe = re.compile(r"\badd\b[^.]")
print("Splitting ASM files...")
for i in sFiles:
	lineNum = 1

	tmpFile = open(i,'r')
	num_lines = sum(1 for line in tmpFile)
	num_lines -= 1;
	tmpFile.close()
	tmpFile = open(i,'r')
	buff = tmpFile.read();
	matches = myRe.findall(buff)
	print(matches,i);
	if len(matches) != 0:
		tmpFile.close()
		continue
	tmpFile.close()

	with open(i, 'r') as iFile:
		for line in iFile:
			if "/*" in line and fileStartAddr=="":
				fileStartAddr = line.split()[2]
			if ".section .text" in line:
				sectionStart = lineNum
			if ("glabel" in line and "D_" not in line):
				symReference[line.split()[-1]] = [lineNum]
				if curr_sym != "":
					symReference[curr_sym].append(lineNum)
					# print(symReference[curr_sym][0], lineNum - 1, i, sys.argv[1]+"/asm/non_matchings/"+getFileName(i)+"/"+curr_sym+".s")
					splitFunc(symReference[curr_sym][0], lineNum - 1, i, sys.argv[1]+"/asm/non_matchings/"+getFileName(i)+"/"+curr_sym+".s")
				curr_sym = line.split()[-1]
				lastSymInFile = []
				lastSymInFile.append(curr_sym)
				lastSymInFile.append(lineNum)
			lineNum+=1
		# print(lastSymInFile[1], num_lines, i, sys.argv[1]+"/asm/non_matchings/"+getFileName(i)+"/"+curr_sym+".s")
		if len(symReference) != 0:
			splitFunc(lastSymInFile[1], num_lines, i, sys.argv[1]+"/asm/non_matchings/"+getFileName(i)+"/"+curr_sym+".s")
		else:
			os.system("echo \"glabel func_"+fileStartAddr+"\" >> "+sys.argv[1]+"/asm/non_matchings/"+getFileName(i)+"/"+getFileName(i)+".s")
			# splitFunc2(sectionStart + 1, num_lines, i, sys.argv[1]+"/asm/non_matchings/"+getFileName(i)+"/"+getFileName(i)+".s")
	os.system("cat prelude.inc > "+sys.argv[1]+"/src/"+getFileName(i)+".c")
	oFileName = sys.argv[1]+"/src/"+getFileName(i)+".c"
	print(oFileName)
	for sym in symReference:
		os.system("echo \"#ifdef NON_MATCHING\" >> "+oFileName)
		os.system("./mips_to_c/mips_to_c.py --no-andor "+sys.argv[1]+"/asm/non_matchings/"+getFileName(i)+"/"+sym+".s "+sym+" >> "+oFileName)
		os.system("echo \"#else\" >> "+oFileName)
		os.system("echo \"GLOBAL_ASM(\\\"asm/non_matchings/"+getFileName(i)+"/"+sym+".s\\\")\" >> "+oFileName)
		os.system("echo \"#endif\n\" >> "+oFileName)
	if len(symReference) == 0:
		os.system("echo \"GLOBAL_ASM(\\\"asm/non_matchings/"+getFileName(i)+"/"+getFileName(i)+".s\\\")\n\" >> "+sys.argv[1]+"/src/"+getFileName(i)+".c")
	symReference={}
	curr_sym=""
	sectionStart = 0
	fileStartAddr = ""
	gotFirstFunc = 0

					# gotFirstFunc = 1
					# os.system("echo \"glabel func_"+fileStartAddr+"\" >> "+sys.argv[1]+"/asm/non_matchings/"+getFileName(i)+"/"+getFuncName(i)+".s")
					# splitFunc2(sectionStart, lineNum - 1, i, sys.argv[1]+"/asm/non_matchings/"+getFileName(i)+"/"+getFuncName(i)+".s")
					# curr_sym = line.split()[-1]