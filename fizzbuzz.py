prompt = input().split()

for p in prompt:
	p = int(p)

for i in range(1, int(prompt[2])+1):
	if i%int(prompt[0]) == 0 and i%int(prompt[1]) == 0:
		print("FizzBuzz")
	elif i%int(prompt[0]) == 0 and i%int(prompt[1] )!=0:
		print("Fizz")
	elif i%int(prompt[0])!=0 and i%int(prompt[1])==0:
		print("Buzz")
	else:
		print(i)

