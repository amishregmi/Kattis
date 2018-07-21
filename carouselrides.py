while True:
	prompts = input().split()
	noofcases= int(prompts[0])
	maxnooftickets=int(prompts[1])
	bestoffer= 1000
	minprice = 1000
	answer = []
	answer.append(0)
	answer.append(0)

	if noofcases ==0 and maxnooftickets == 0:
		exit()

	for i in range(0, noofcases):
		prompt = input().split()

		nooftickets=int(prompt[0])
		price= int(prompt[1])

		if nooftickets<=maxnooftickets:
			priceofoneticket = price/nooftickets
			
			if priceofoneticket<minprice:
				minprice = priceofoneticket

				answer[0]=nooftickets
				answer[1]=price

			elif priceofoneticket==minprice:
				if nooftickets>answer[0]:
					minprice = priceofoneticket
					answer[0] = nooftickets
					answer[1] = price




	bestoffer= minprice

	if bestoffer==1000:
		print("No suitable tickets offered")

	else:
		out = "Buy "+str(answer[0])+" tickets for $"+str(answer[1])
		print(out)
		










