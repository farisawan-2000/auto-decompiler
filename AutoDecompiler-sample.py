import sys, os, glob, re

# change these parameters as you please! :)
REPO_DIRECTORY = "../mk64"
NON_MATCHING_DIR = "../mk64/asm/non_matchings"
ASM_DIR = "../mk64/asm/"
SRC_DIR = "../mk64/src/"


s_files = [i for i in glob.glob(ASM_DIR+"**/*.s", recursive=True) if "non_matchings" not in i and "entry" not in i and "rom_header" not in i and "boot" not in i]


# TODO: Add filter for add instruction
PureAsmDetector = re.compile(r"\badd\b[^.]")
s_files_copy = s_files
for i in s_files_copy:
	tmpFile = open(i,'r')
	buff = tmpFile.read();
	matches = PureAsmDetector.findall(buff)
	if len(matches) != 0:
		s_files.remove(i)

currFile = 1
for i in s_files:
	os.system("python3 AutoSplitter2.py "+i+" "+NON_MATCHING_DIR)
	currFile+=1