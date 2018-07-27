numbers=[]
for i in range(9):
	number = int(input())
	numbers.append(number)

addvalue = sum(numbers)
#print(addvalue)
reductionvalue = addvalue-100
#print(reductionvalue)


redvalue = []

for i in numbers:
	for j in numbers:
		if i!=j:
			if i+j == reductionvalue:
				numbers.remove(i)
				numbers.remove(j)


for numb in numbers:
	print(numb)