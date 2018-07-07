/*
	* ALGORITHM - to find a pair of number with the sum
	* AUTHOR - TENSORED
	* DATE - 7/7/2018
	* ORDER - O(n)
	* DATA STRUCTURE USED - UNORDERED MAP
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;//number of element in array
	int a[n],sum;
	cin>>sum;//sum
	unordered_map <int ,int > umap;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(umap.find(sum-a[i])!=umap.end())
		{	
			cout<<"solution found "<<a[umap[sum-a[i]]]<<" and  "<<a[i]<<endl;
			return 0;
		}
		umap[a[i]]=i;
	}
	cout<<"no pair found\n";
	return 0;
}
