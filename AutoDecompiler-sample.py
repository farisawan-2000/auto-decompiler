import sys, os, glob, re

# change these parameters as you please! :)
REPO_DIRECTORY = "../mk64_2"
NON_MATCHING_DIR = "../mk64_2/asm/non_matchings"
ASM_DIR = "../mk64_2/asm/"
SRC_DIR = "../mk64_2/src/"


s_files = [i for i in glob.glob(ASM_DIR+"**/*.s", recursive=True) if "non_matchings" not in i and "entry" not in i and "rom_header" not in i]

for i in s_files:
	os.system("python3 AutoSplitter2.py "+i+" "+NON_MATCHING_DIR)