from sys import stdin 

wordtovalue = {}

for line in stdin:
	commands = line.split(' ')
	commands[-1] = commands[-1].strip()

	#print(commands)

	if len(commands)==1:
		wordtovalue.clear()


	else:
		if commands[0]=='def':
			if commands[1] in wordtovalue:
				del wordtovalue[commands[1]]
				wordtovalue[commands[1]]=int(commands[2])
			else:
				wordtovalue[commands[1]]= int(commands[2])

	#MAKE THIS WORK!!

		elif commands[0]=='calc':
			#		print(commands)
			words =[]
			s=" "

			expressions = ['+','-']
			strval =""
			ukn = False

			for i in commands[1:-1]:
				if i in wordtovalue.keys():
					continue
				elif i in expressions:
					continue
				else:
					stre  = s.join(commands)+' uknown'
					print(stre)
					ukn=True
					break

			if not ukn:

				for i in commands[1:-1]:
					if i not in expressions:
						add = str(wordtovalue[i])
						strval+=add
					elif i in expressions:
						strval+=i 
				val = eval(strval)

				if val not in wordtovalue.values():
					print(s.join(commands), "unknown")
					
				else:
					for a,b in wordtovalue.items():
						if b == val:
							print(s.join(commands), a)










		