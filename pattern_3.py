# 3.Print the following pattern, given the input n (number of rows).
# INPUT: n = 5
# A
# BB
# CCC
# DDDD
# EEEEE

n = int(input())
for i in range(1,n):
	for j in range(1,i+1):
		print(chr(n+i-1),end="")
	print()