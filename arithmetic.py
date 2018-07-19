
inputnumber = int(input())
decimal = int(str(inputnumber), 8)
hexanumb = hex(decimal)
print(hexanumb[2:])


'''
inputnumber=int(input())
countnumber=inputnumber
digitcount=0
while countnumber>=1:
    digitcount+=1
    countnumber=countnumber/10
countnumber=inputnumber
i=0 
remainder=0
decimalsum=0
while i<digitcount:
    remainder=countnumber%10
    decimalsum+=remainder* (8**i)
    countnumber-=remainder
    countnumber=countnumber/10
    i+=1



countnumber=int(decimalsum) #Decimal value of the input number

outstr=""
while countnumber>=1:
    remainder=countnumber%16

    if remainder==0:
        outstr+=str(0)
    if remainder>0 and remainder<10:
        outstr+=str(remainder)
    else:
        if remainder==10:
            outstr+='A'
        elif remainder==11:
            outstr+='B'
        elif remainder==12:
            outstr+='C'
        elif remainder==13:
            outstr+='D'
        elif remainder==14:
            outstr+='E'
        elif remainder==15:
            outstr+='F'

    countnumber=countnumber//16
outstr=outstr[::-1]
print(outstr)    

'''