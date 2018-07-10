/*
	* ALGORITHM - sort binary array using the concept of pivot
	* AUTHOR - TENSORED
	* DATE - 10/7/2018
	* ORDER - O(n)
	* ALGORITHM - LINEAR TIME PARTITIONING ROUTINE
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],pivot=1,start=0,end=n-1;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<=end;)
	{
		if(arr[i]<pivot)
		{
			swap(arr[i],arr[start]);
			start++;
			i++;
		}
		else if(arr[i]>pivot)
		{
			swap(arr[i],arr[end]);
			end--;
		}
		else
			i++;
		
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}

