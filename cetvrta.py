input1= input()
input2= input()
input3= input()

x1,y1= input1.split()
x2,y2= input2.split()
x3,y3= input3.split()

#print(x1,y1)
#print(x2,y2)
#print(x3,y3)

if int(y1)==int(y2):
	req_y = y3
#	print(req_y) 
	


elif int (y2) == int (y3):
	req_y=y1 
	
elif int(y1) == int(y3):
	req_y = y2

if int(x1) == int(x2):
		req_x = x3
elif int(x1) == int(x3):
		req_x = x2
else:
		req_x = x1 
	

print(req_x,req_y)
