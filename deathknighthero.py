number = int(input())
count=0
for i in range(0,number):
	order = input()

	if "CD" not in order:
		count+=1


print(count)
