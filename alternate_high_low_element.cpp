/*
	* ALGORITHM - (no repetition)to rearrange the array such that the element on the left and right are smaller than the current one
	* AUTHOR - TENSORED
	* DATE - 10/7/2018
	* ORDER - O(n)
	* DATA STRUCTURE USED - ARRAY
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=1;i<n;i=i+2)
	{
		if(arr[i]<arr[i-1])
			swap(arr[i],arr[i-1]);
		if(i+1<n&&arr[i]<arr[i+1])
			swap(arr[i],arr[i+1]);
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
