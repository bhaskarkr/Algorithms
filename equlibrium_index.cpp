/*
	* ALGORITHM - to find the equilibrium indices of an array
	* AUTHOR - TENSORED
	* DATE - 10/7/2018
	* ORDER - O(n)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],total=0,right=0;
	for(int i=0;i<n;i++)
	{	
		cin>>arr[i];
		total+=arr[i];
	}
	for(int i=n-1;i>=0;i--)
	{	
		if(right==total-(arr[i]+right))
			cout<<"equilibrium index : "<<i<<endl;
		right+=arr[i];
	}
	return 0;
}

