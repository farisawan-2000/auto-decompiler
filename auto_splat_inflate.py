import sys
from lib.getNewFunc import getNewFunc

# DECOMP_ROOT = "~/Documents/eva"
DECOMP_ROOT = "~/Documents/spbeta"

filebuf = ""

isAlreadyInflated = False
# with open(sys.argv[1]) as f:
# 	for line in f:
# 		if "#ifdef" in line:
# 			isAlreadyInflated = True
# 		if "#endif" in line:
# 			isAlreadyInflated = False
# 		if "INCLUDE_ASM" in line and not isAlreadyInflated:
# 			tok = line.replace("(", " ").replace(")", " ").replace(",", " ").split()
# 			# print(tok)
# 			fl = tok[2]
# 			fn = tok[3]
# 			fname = "%s/asm/nonmatchings/%s/%s.s" % (DECOMP_ROOT, fl[1:-1], fn)
# 			filebuf += "%s\n" % ("#if 1")
# 			filebuf += "%s\n" % (line[:-1])
# 			filebuf += "%s\n" % ("#else")
# 			filebuf += "%s\n" % (getNewFunc(fname)[:-1])
# 			filebuf += "%s\n" % ("#endif")
# 		else:
# 			filebuf += "%s\n" % (line[:-1])
with open(sys.argv[1]) as f:
	for line in f:
		if "#if" in line:
			isAlreadyInflated = True
		if "#endif" in line:
			isAlreadyInflated = False
		if "GLOBAL_ASM" in line and not isAlreadyInflated:
			tok = line.replace("(", " ").replace(")", " ").replace(",", " ").split()
			# print(tok)
			fn = tok[2]
			fname = "%s/%s" % (DECOMP_ROOT, fn)
			filebuf += "%s\n" % ("#if 1")
			filebuf += "%s\n" % (line[:-1])
			filebuf += "%s\n" % ("#else")
			filebuf += "%s\n" % (getNewFunc(fname)[:-1])
			filebuf += "%s\n" % ("#endif")
		else:
			filebuf += "%s\n" % (line[:-1])

with open(sys.argv[1], "w+") as f:
	f.write(filebuf)