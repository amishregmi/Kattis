vowels = ['a','e','i','o','u']

checkstring = input()
out =""
count=0

while count<(len(checkstring)):


	if checkstring[count] in vowels:
		out+=checkstring[count]
		count+=3

	else:
		out+=checkstring[count]
		count+=1
		

print(out)


