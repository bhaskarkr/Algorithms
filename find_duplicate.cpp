/*
	* ALGORITHM - to find duplicate element
	* AUTHOR - TENSORED
	* DATE - 11/7/2018
	* ORDER - O(n)
	* DATA STRUCTURE USED - ARRAY
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,x=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{	
		cin>>a;
		x^=a;
	}
	for(int i=1;i<=n-1;i++)
		x^=i;
	cout<<x<<endl;
	return 0;
}
