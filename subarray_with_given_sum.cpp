/*
	* ALGORITHM - to find subarrays with given sum
	* AUTHOR - TENSORED
	* DATE - 9/7/2018
	* ORDER - 
	* DATA STRUCTURE USED - UNORDERED MAP , VECTOR
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map <int,vector<int> > umap;
	unordered_map <int,vector<int> >::iterator itr;
	int n,sum;
	cin>>n>>sum;
	int arr[n],sum_till_now=0;
	umap[0].push_back(-1);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum_till_now+=arr[i];
		if((itr=umap.find(sum_till_now-sum))!=umap.end())
		{
			for(auto &j:itr->second)
			{
				for(int k=j+1;k<i+1;k++)
					cout<<arr[k]<<" ";
				cout<<endl;
			}
		}
		umap[sum_till_now].push_back(i);
	}
	return 0;
}
