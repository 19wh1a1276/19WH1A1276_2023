// 11. Print the following pattern, given the input n(number of rows).
// INPUT: n = 4
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int mat[2*n][2*n] = {0};
	for(int i=0; i<(2*n)-1; i++)
	{
		for(int j=0; j<(2*n)-1; j++)
		{
			if(i < n && j < n)
			{
				mat[i][j] = max(n-i, n-j);
			}
			else if(i < n)
			{
				mat[i][j] = max(n-i, n-((2*n)-j-2));
			}
			else if(j < n)
			{
				mat[i][j] = max(n-((2*n)-i-2), n-j);
			}
			else
			{
				mat[i][j] = max(n-((2*n)-i-2), n-((2*n)-j-2));
			}
		}
	}
	for(int i=0; i<(2*n)-1; i++)
	{
		for(int j=0; j<(2*n)-1; j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}