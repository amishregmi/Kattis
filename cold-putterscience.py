number = int(input())

temp_list = input()

temperatures = map(float, temp_list.split())
count = 0
for temp in temperatures:
	if temp<0:
		count+=1

print(count)
