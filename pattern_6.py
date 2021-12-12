# 6.Print the following pattern, given the input n (number of rows).
# INPUT: n = 5
# * * * * *
#  * * * * 
#   * * *  
#    * *   
#     * 

n = int(input())
for i in range(n):
    print((" ")*i + ("* ")*(n-i))