numberoftimes= int(input())

original = list(input())
check = list(input())
i = 0

while i<numberoftimes:

	for j in range(len(original)):
		if original[j] == '0':
			original[j]='1'
			

		else:
			original[j]='0'
	i+=1

if original==check:
	print('Deletion succeeded')

else:
	print('Deletion failed')