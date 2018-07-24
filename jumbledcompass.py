currentdir=int(input())
requireddir=int(input())

if currentdir>=requireddir:

	direct = currentdir-requireddir
	indirect = (360-currentdir)+requireddir
	#print(direct)
	#print(indirect)
	if direct == 0:
		print(int(0))

	elif direct<indirect:
		print(int(0-direct))
	else:
		print(int(indirect))

elif requireddir>currentdir:

	direct = requireddir- currentdir
	indirect= (currentdir)+(360-requireddir)

	if direct<=indirect:
		print(direct)
	else:
		print(int(0-indirect))

