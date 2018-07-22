import sys

dictentry= input()
foreigntoenglish = {}

while True:
	if dictentry=='':
		break

	words=dictentry.split()
	#print(words[1])
	#print(words[0])

	foreigntoenglish[words[1]]=words[0]

	dictentry = input()
	

checkline = sys.stdin.readlines()

for oneline in checkline:

	if oneline[:-1] in foreigntoenglish.keys():
		val=foreigntoenglish[oneline[:-1]]
		print(val)

	else:
		print('eh')


