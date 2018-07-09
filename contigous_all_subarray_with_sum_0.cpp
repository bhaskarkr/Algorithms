/*
	* ALGORITHM - to find contigous subarray of number with the sum 0
	* AUTHOR - TENSORED
	* DATE - 9/7/2018
	* ORDER - O(n^2)
	* DATA STRUCTURE USED - UNORDERED MULTI-MAP
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0,arr[n];
	unordered_multimap <int,int> umm;
	unordered_multimap <int,int>::iterator it;
	umm.insert(make_pair(0,-1));
	for(int i=0;i<n;i++)
	{	
		cin>>arr[i];
		sum+=arr[i];
		if((it=umm.find(sum))!=umm.end())
		{
			while(it!=umm.end()&&it->first==sum)
			{
				for(int j=it->second+1;j<=i;j++)
					cout<<arr[j]<<" ";
				cout<<"\n";
				it++;
			}
		}
		umm.insert(make_pair(sum,i));
	}
	return 0;
}
