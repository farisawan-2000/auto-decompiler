import subprocess
def __getFileName(_file):
    return _file.split("/")[-1].split(".")[0]

def getNewFunc(_fileName):
    proc = subprocess.Popen(
        "./mips_to_c/mips_to_c.py --no-casts " + _fileName + " " + __getFileName(_fileName)
        +" --context ~/Downloads/context.c"
        ,
        shell=True,
        stdout=subprocess.PIPE,
    )
    toReturn = proc.communicate()
    test = toReturn[0].decode("ascii")
    if "Complex control flow" in test:
        proc = subprocess.Popen(
            "./mips_to_c/mips_to_c.py --no-andor "
            + _fileName
            + " "
            + __getFileName(_fileName),
            shell=True,
            stdout=subprocess.PIPE,
        )
        toReturn = proc.communicate()
    return toReturn[0].decode("ascii")
