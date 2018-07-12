/*
	* ALGORITHM - Length of the largest subarray with contiguous elements even if duplicate element exists
	* AUTHOR - TENSORED
	* DATE - 12/7/2018
	* ORDER - O(n^2)
	* DATA STRUCTURE USED - SET
*/
#include <bits/stdc++.h>
using namespace std;
int find_subarray(int arr[],int n)
{
	int min_ele,max_ele,max_len=1;
	for(int i=0;i<n-1;i++)
	{
		set <int> s;
		s.insert(arr[i]);
		max_ele = arr[i];
		min_ele = arr[i];
		for(int j=i+1;j<n;j++)
		{
			if(s.find(arr[j])!=s.end())
				break;
			s.insert(arr[j]);
			max_ele = max(max_ele,arr[j]);
			min_ele = min(min_ele,arr[j]);
			if(max_ele-min_ele==j-i)
				max_len=max(max_len,max_ele-min_ele+1);
		}
	}
	return max_len;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"max_length = "<<find_subarray(arr,n)<<endl;
	return 0;
}

