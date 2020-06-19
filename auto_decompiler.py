# Sample Decompiler script for MK64

import sys, os, glob, re

# change these parameters as you please! :)
REPO_DIRECTORY = "../mk64_priv"
NON_MATCHING_DIR = "../mk64_priv/asm/non_matchings"
ASM_DIR = "../mk64_priv/asm/"
SRC_DIR = "../mk64_priv/src/"


s_files = [
    i
    for i in glob.glob(ASM_DIR + "**/*.s", recursive=True)
    if "non_matchings" not in i
    and "entry" not in i
    and "rom_header" not in i
    and "boot" not in i
]
s_files = [
    i for i in s_files if "libultra" not in s_files
]  # skip libultra until it's split into files

# TODO: Add filter for add instruction
PureAsmDetector = re.compile(r"\badd\b[^.]")
s_files_copy = s_files
for i in s_files_copy:
    tmpFile = open(i, "r")
    buff = tmpFile.read()
    matches = PureAsmDetector.findall(buff)
    if len(matches) != 0:
        s_files.remove(i)

currFile = 1
for i in s_files:
    os.system("python3 auto_splitter.py " + i + " " + NON_MATCHING_DIR)
    currFile += 1
