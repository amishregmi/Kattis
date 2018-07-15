times = int(input())

starts = []
stops = []

for i in range(0,times):
	times = input()

	start, stop = times.split()
	starts.append([int(start)])
	stops.append([int(stop)])

maxstart = max(starts)
minstop = min(stops)

#print(maxstart)
#print(minstop)

if maxstart<=minstop:
	print('gunilla has a point')
else:
	print('edward is right')