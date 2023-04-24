N = int(input())

flag = 0
i = 0
while i<216:
	sum = i
	for j in range(len(str(i))):
		sum += int(str(i)[j])

	if sum == N:
		print(i)
		flag = 1
		break

	i += 1

if flag == 0: print(0)
