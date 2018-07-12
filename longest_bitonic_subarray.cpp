/*
	* ALGORITHM - longest bitonic subarray
	* AUTHOR - TENSORED
	* DATE - 12/7/2018
	* ORDER - Time-O(n) space-O(1)
	* DATA STRUCTURE USED - SET
*/
#include <bits/stdc++.h>
using namespace std;
int find_subarray(int arr[],int n)
{
	int i=0,end=-1,max_len=1;
	while(i+1<n)
	{
		int count=1;
		while(i+1<n&&arr[i]<arr[i+1])
		{	
			count++;
			i++;
		}
		while(i+1<n&&arr[i]>=arr[i+1])
		{	
			count++;
			i++;
		}
		if(count>max_len)
		{
			max_len=count;
			end=i;
		}
	}
	for(int i=end-max_len+1;i<=end;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return max_len;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<find_subarray(arr,n)<<endl;
	return 0;
}

