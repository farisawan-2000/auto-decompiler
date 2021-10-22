import sys, os, subprocess, re
from lib.getNewFunc import getNewFunc

K64_DIR = "../NK4E/"
CONTEXT_FILE = "~/notkirby/ctx.c"

M2C_LINE_PATTERN = r"#ifdef\s+MIPS_TO_C"
NM_LINE_PATTERN = r"#ifdef\s+NON_MATCHING"
M2C_ELSE_PATTERN = r"#else\n"
M2C_G_ASM_PATTERN = r"GLOBAL_ASM"
# M2C_G_ASM_PATTERN = r"GLOBAL_ASM\s*\(\s*\"(.*?)\"\s*\)."
M2C_END_PATTERN = r"#endif"
class m2cFunc:
    def __init__(self):
        self.ifdef_line = 0
        self.else_line = 0
        self.global_asm_file = 0


def GetNonMatchingFunctions(files, rpatterns):
    functions = []

    for file in files:
        with open(file) as f:
            lineNum = 1
            for line in f:
                for x in rpatterns:
                    if len(re.findall(x, line, re.DOTALL)) != 0:
                        functions+=[lineNum - 1]
                lineNum+=1
    return functions

ifdefs = GetNonMatchingFunctions([sys.argv[1]], [M2C_LINE_PATTERN, NM_LINE_PATTERN])
elses = GetNonMatchingFunctions([sys.argv[1]], [M2C_ELSE_PATTERN])

g_asm = GetNonMatchingFunctions([sys.argv[1]], [M2C_G_ASM_PATTERN])
print(g_asm)
ends = GetNonMatchingFunctions([sys.argv[1]], [M2C_END_PATTERN])

ff = open(sys.argv[1])
fl = ff.readlines()
ff.close()

isNewFunc = 0
isOldFunc = 0
endifLine = 0
gotNewFunc = 0
indices = []
nF = ""
lineNum = 0
for line in fl:
    if endifLine == 1:
        isNewFunc = 0
        endifLine = 0
        isOldFunc = 0
    for x in range(len(ifdefs)):
        if lineNum == ifdefs[x]:
            if "MIPS_TO_C" in fl[ifdefs[x]]:
                isNewFunc = 1
            else:
                isOldFunc = 1
        elif lineNum == ends[x]:
            endifLine = 1
            # if isOldFunc == 1:
            #   print("#endif")
        elif lineNum == g_asm[x]:
            nf = line.replace("(\""," ").replace("\")"," ").split()[1]
            if isOldFunc == 0 and isNewFunc == 1:
                gotNewFunc = 1
    if gotNewFunc == 1:
        print(K64_DIR+nf)
        nf2 = getNewFunc(K64_DIR+nf)
        nF += "#ifdef MIPS_TO_C\n"
        nF += nf2
        nF += "#else\n"
        nF += "GLOBAL_ASM(\""+nf+"\")\n"
        # nF += "INCLUDE_ASM(\""+nf+"\")\n"
        nF += "#endif\n"
        gotNewFunc = 0
    if isNewFunc == 0 and endifLine == 0:
        nF += line
    elif isOldFunc == 1:
        nF += line
    # print(isNewFunc, isOldFunc, "#bruh")
    lineNum += 1;

f = open(sys.argv[1], "w+")
f.write(nF)
f.close()
