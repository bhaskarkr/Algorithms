/*
	* ALGORITHM - to find longest subarray with equal number of 0 and 1
	* AUTHOR - TENSORED
	* DATE - 10/7/2018
	* ORDER - O(n)
	* DATA STRUCTURE - unordered map
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map <int,int> umap;
	int n;
	cin>>n;
	umap[0]=-1;//initially sum was zero
	int arr[n],max_length=-1,sum=0,end=0;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
	{	
		sum+=(arr[i]==0?-1:1);
		if(umap.find(sum)!=umap.end()&&max_length<i-umap[sum])
		{
			max_length = i - umap[sum];
			end=i;
		}
		else
			umap[sum]=i;
		//cout<<sum<<" "<<max_length<<endl;
	}
	if(max_length==-1)
		cout<<"no subarray found\n";
	else 
	{
			for(int i=end-max_length+1;i<=end;i++)
				cout<<arr[i]<<" ";
			cout<<"\n";
	}
	return 0;
}

