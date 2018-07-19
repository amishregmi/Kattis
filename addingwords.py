import sys 

wordtoint= {}
inttoword={}

for line in sys.stdin:
	command=line.split()

	if command[0] == 'def':
		if command[1] in wordtoint.keys():
			del inttoword[int(wordtoint[command[1]])]

		wordtoint[command[1]]= command[2]
		inttoword[int(command[2])]= command[1]

	elif command[0] == 'calc':

		compare = len(list(filter(lambda z:z in wordtoint.keys(), command[1:][::2])))
		inputlen = len(command[1:][::2])

		if compare!=inputlen:
			print(" ".join(command[1:]), 'unknown')

		else:

			operation = map(lambda z: wordtoint[z] if z in wordtoint.keys() else z,command[1:-1])

			str_operation = eval(" ".join(operation))

			if str_operation in inttoword.keys():
				print(" ".join(command[1:]), inttoword[str_operation])

			else:
				print(" ".join(command[1:]), 'unknown')

	else:
		wordtoint={}
		inttoword={}