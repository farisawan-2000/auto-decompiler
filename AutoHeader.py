import sys, os, glob, subprocess, re

# function name
myPattern = re.compile(r"func_[0-9a-fA-F]{8}")

# the entire function prototype
funcArgs = re.compile(r"\**func_[0-9a-fA-F]{8}\([0-9A-za-z ,\?]+\)")

# Pass 1: Add func calls to structures
# TODO: write found funcs into a header structure
# TODO: do this for all C files

ifdef = -1
lineNum = 0

myFileFuncs = {}
myFilePrototypes = {}

notMyFileFuncs = {}
notMyFilePrototypes = {}

with open(sys.argv[1]) as inFile:
    for line in inFile:
        matches = myPattern.findall(line)
        prototype = funcArgs.findall(line)
        if ifdef == 0:
            print(line[:-2])
            for match in matches:
                myFileFuncs[match] = lineNum
        elif len(matches) > 0:
            for match in matches:
                notMyFileFuncs[match] = lineNum
        if "#ifdef MIPS_TO_C" in line:
            ifdef = 2
        lineNum += 1
        ifdef -= 1

print(myFileFuncs)
print(notMyFileFuncs)
