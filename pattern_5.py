# 5.Print the following pattern, given the input n (number of rows).
# INPUT: n = 5
#     *    
#    * *   
#   *   *  
#  *     * 
# *       *
#  *     *
#   *   *
#    * *
#     *
n = int(input())
for i in range(1,n+1):
	for j in range(1,2*n):
		if(j==n-i+1 or j==n+i-1):
			print("*",end="")
		else:print(" ",end="")
	print()
for i in range(n-1,0, -1):
    for j in range(1,n-i+1):
        print(" ", end="")
    for j in range(1, 2*i):
        if j==1 or j==2*i-1:
            print("*", end="")
        else:
            print(" ", end="")
    print()