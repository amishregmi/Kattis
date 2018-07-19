line = input()
numb1, numb2, numb3 = map(int, line.split())

a =[]
a.extend((numb1,numb2,numb3))
a.sort()

firstdiff = a[1]-a[0]
seconddiff = a[2]- a[1]

if firstdiff == seconddiff:
	print(a[2]+firstdiff)

elif firstdiff>seconddiff:
	print(seconddiff+a[0])

else:
	print(firstdiff+a[1])
