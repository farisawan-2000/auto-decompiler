import sys
labels = []
with open(sys.argv[1]) as f:
	for line in f:
		if ".text" in line:
			break
		if ".word" in line:
			t = line.split()
			if t[1][:-1] not in labels:
				labels.append(t[1][:-1])


with open(sys.argv[1]) as f:
	for line in f:
		if len(line.split()) > 4:
			t = line.split()
			for i in labels:
				if t[2] in i:
					print("."+i+"3:")
		print(line[:-1])