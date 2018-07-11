/*
	* ALGORITHM - to replace each element of an array with the product of other elements
	* AUTHOR - TENSORED
	* DATE - 11/7/2018
	* ORDER - O(n) :: RECURSION
	* DATA STRUCTURE USED - ARRAY
*/
#include <bits/stdc++.h>
using namespace std;
int find_new_array(int arr[],int n,int left,int i)
{
	if(i==n)
		return 1;
	int curr= arr[i];
	int right = find_new_array(arr,n,left*arr[i],i+1);
	arr[i]=left*right;
	return right*curr;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	find_new_array(arr,n,1,0);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
