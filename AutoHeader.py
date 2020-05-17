import sys, os, glob, subprocess, re

# function name
myPattern = re.compile(r'func_[0-9a-fA-F]{8}')

# function name plus its args (might be useful)
funcArgs = re.compile(r'func_[0-9a-fA-F]{8}\([0-9A-za-z ,\?]*\)')

# Pass 1: Add func calls to structures
# TODO: 2 structures per file: funcs the file has, and funcs the file calls

ifdef = -1
lineNum = 0

myFileFuncs = {}
notMyFileFuncs = {}

with open(sys.argv[1]) as inFile:
	for line in inFile:
		matches = myPattern.findall(line)
		if ifdef == 0:
			for match in matches:
				myFileFuncs[match] = lineNum
			print(line[:-1], matches)
		elif len(matches) > 0:
			for match in matches:
				notMyFileFuncs[match] = lineNum
		if "#ifdef MIPS_TO_C" in line:
			ifdef = 2
		lineNum+=1
		ifdef -= 1