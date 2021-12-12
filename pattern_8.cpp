// 8. Print the pascal's triangle with given input n
// INPUT : n=5
//       1
//      1 1
//     1 2 1
//    1 3 3 1
//   1 4 6 4 1
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int mat[2*n][2*n];
	for(int i=0; i<2*n; i++)
	{
		for(int j=0; j<2*n; j++){ mat[i][j] = 1; }
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(j > 0 && j < i)
			{
				mat[i][j] = mat[i-1][j] + mat[i-1][j-1];
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1; j++){cout<<" "; }
		for(int j=0; j<=i; j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}