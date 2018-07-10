/*
	* ALGORITHM - sort binary array using the concept of pivot
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
	int arr[n],pivot=1,j=0;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i=i+2)
	{
		if(arr[i]<pivot)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
