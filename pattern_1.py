# 1. Print the following pattern, given the input n (number of rows).
# INPUT: n = 5
# *
# **
# ***
# ****
# *****

n = int(input())
for i in range(1,n+1):
	for j in range(1,i+1):
		print("*",end="")
	print()