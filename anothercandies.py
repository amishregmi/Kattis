numberofcases=int(input())
answers=[]
for i in range(numberofcases):
	a = input()
	numberofcandy=0


	numberofkids=int(input())

	for i in range(numberofkids):
		candy=int(input())
		numberofcandy+=candy

	if numberofcandy%numberofkids == 0:
		answers.append("YES")

	else:
		answers.append("NO")



for answer in answers:
	print(answer)



