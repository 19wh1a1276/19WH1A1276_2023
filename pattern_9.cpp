// 9. Print the following pattern, given the input n (number of rows).
// INPUT: n = 5
// *   *
// ** **
// *****
// ** **
// *   *
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0; i<=n/2; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(j <= i){ cout<<"* "; }
			else if(j >= n-i-1){ cout<<"* "; }
			else{ cout<<"  "; }
		}
		cout<<"\n";
	}
	for(int i=n/2 - 1; i>=0; i--)
	{
		for(int j=0; j<n; j++)
		{
			if(j <= i){ cout<<"* "; }
			else if(j >= n-i-1){ cout<<"* "; }
			else{ cout<<"  "; }
		}
		cout<<"\n";
	}
	return 0;
}