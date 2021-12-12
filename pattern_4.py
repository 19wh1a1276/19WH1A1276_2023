# 4.Print the following pattern, given the input n (number of rows).
# INPUT: n = 5
# 12345
# 2345
# 345
# 45
# 5
# 45
# 345
# 2345
# 12345

n = int(input())
for i in range(1,n+1):
	for j in range(i,n+1):
		print(j,end="")
	print()
for i in range(2,n+1):
	for j in range(1,i+1):
		print(n-i+j,end="")
	print()