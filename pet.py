c1= []
c2= []
c3= []
c4= []
c5=[] 

for i in range(5):

	values= list(map(int, input().split()))

	if i == 0:
		c1.extend(values)

	elif i == 1:
		c2.extend(values)
	elif i == 2:
		c3.extend(values)
	elif i == 3:
		c4.extend(values)
	else:
		c5.extend(values)

sum1 = 0
sum2=0
sum3=0
sum4=0
sum5=0

for one in c1:
	sum1+=one

average1= sum1/4

for one in c2:
	sum2+=one
average2= sum2/4

for one in c3:
	sum3+=one 
average3 = sum3/4

for one in c4:
	sum4+=one
average4= sum4/4

for one in c5:
	sum5+=one 

average5 = sum5/4 


if average1>average2 and average1>average3 and average1>average4 and average1>average5:
	print(1, sum1)
elif average2>average1 and average2>average3 and average2>average4 and average2>average5:
	print(2, sum2)
elif average3>average1 and average3>average2 and average3>average4 and average3>average5:
	print(3, sum3)
elif average4>average1 and average4>average2 and average4>average3 and average4>average5:
	print(4, sum4)
else:
	print(5, sum5)