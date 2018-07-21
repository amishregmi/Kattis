instring = input()
count = 0

for i in range(0,len(instring)):

	if (i%3 ==0):
		if instring[i]!='P':
			count+=1
	elif (i%3 == 1):
		if instring[i]!='E':
			count+=1
	else:
		if instring[i]!='R':
			count+=1

print(count)


