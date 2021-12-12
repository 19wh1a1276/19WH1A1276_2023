# 7.Print the following pattern, given the input n (number of rows).
# INPUT: n = 5 ( n must be odd)
# -----
# *   *
# *****
# *   *
# -----
n = int(input())
for i in range(1,n+1):
	for j in range(1,n+1):
		if(i==1 or i==n ):
			print("-",end="")
		elif(j==1 or j==n):
            print("*",end="")
		elif(i==(n//2)+1):
            print("*",end="")
		else:
			print(" ",end="")
	print()