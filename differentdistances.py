while True:
	values= input()

	if values!="0":
		x1, y1, x2, y2, p = map(float,values.split())
		answer = (abs(x1-x2)**p + abs(y1-y2)**p) ** (1/p)
		print(answer)

	else:
		exit()