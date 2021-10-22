import subprocess
def __getFileName(_file):
    return _file.split("/")[-1].split(".")[0]

CONTEXT = "~/NK4E/ctx.c"
# CONTEXT = "~/Documents/dinosaur-planet/ctx.c"
# CONTEXT = "~/Documents/mk64/ctx.c"

def getNewFunc(_fileName):
    proc = subprocess.Popen(
        "./mips_to_c/mips_to_c.py --no-casts " + _fileName #+ " " + __getFileName(_fileName)
        +" --context %s " % CONTEXT
        +" --rodata ~/NK4E/data/ovl3/kirby.0F0D50.1.s "
        # +" --no-andor"
          # +" --reg-vars=saved"
        ,
        shell=True,
        stdout=subprocess.PIPE,
    )
    toReturn = proc.communicate()
    test = toReturn[0].decode("ascii")
    if "Complex control flow" in test:
        proc = subprocess.Popen(
            "./mips_to_c/mips_to_c.py --no-andor --no-casts"
            +" --context %s " % CONTEXT
            +" --rodata ~/NK4E/data/ovl3/kirby.0F0D50.1.s "
            + _fileName
            + " "
            + __getFileName(_fileName),
            shell=True,
            stdout=subprocess.PIPE,
        )
        toReturn = proc.communicate()
    return toReturn[0].decode("ascii")
