import subprocess, os
def __getFileName(_file):
    return _file.split("/")[-1].split(".")[0]

CONTEXT = "~/Decomps/kirby64/ctx.c"
# CONTEXT = "~/Documents/dinosaur-planet/ctx.c"
# CONTEXT = "~/Documents/mk64/ctx.c"

RODATA = "~/Decomps/kirby64/data/ovl12/kirby.u.1F2DE0.s"


def getNewFunc(myFileName):


    _fileName = "/tmp/m2c.s"

    os.system("cat %s %s > %s" % (myFileName, RODATA, _fileName))


    proc = subprocess.Popen(
        "./mips_to_c/m2c.py --no-casts " + _fileName #+ " " + __getFileName(_fileName)
        +" --context %s " % CONTEXT
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
            "./mips_to_c/m2c.py --no-andor --no-casts"
            +" --context %s " % CONTEXT
            + _fileName
            + " "
            + __getFileName(_fileName),
            shell=True,
            stdout=subprocess.PIPE,
        )
        toReturn = proc.communicate()

    me = toReturn[0].decode("ascii")

    for line in me.split("\n"):
        if "extern" in line:
            print(line)

    return "\n".join([d for d in me.split("\n") if "extern" not in d])
