noofcases=int(input())

for i in range(noofcases):
	blank= input()
	values = list(map(int, input().split()))
	noofcsstudents= values[0]
	noofeconstudents=values[1]

	
	csiqs = list(map(int, input().split()))

	econiqs = list(map(int, input().split()))

	avgcs = 0
	avgecon = 0

	for one in csiqs:
		avgcs+=one 

	for one in econiqs:
		avgecon+=one 

	averageofcs = avgcs/noofcsstudents
	averageofecon = avgecon/noofeconstudents

	count = 0 

	for one in csiqs:
		if one < averageofcs and one > averageofecon:
			count+=1 


	print(count)