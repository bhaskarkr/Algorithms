/*
	* ALGORITHM - to find index of 0 and replace it with 1 to make the length of consecutive 1's max
	* AUTHOR - TENSORED
	* DATE - 11/7/2018
	* ORDER - O(n)
	* DATA STRUCTURE USED - ARRAY
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],count=0,max_count=0,max_index=-1,prev_zero=-1;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
			count++;
		else
		{
			count=i-prev_zero;
			prev_zero=i;
		}
		if(count>max_count)
		{
			max_count=count;
			max_index=prev_zero;
		}
	}
	if(max_index==-1)
		cout<<"no index found\n";
	else
		cout<<"index = "<<max_index<<endl;
	return 0;
}
