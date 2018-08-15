#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int> 
int main()
{
	int n=1000;
	unordered_map<int ,vector< pii > > umap;
	vector <pii>::iterator itr;
	int a[1000],b[1000];
	for(int i=0;i<n;i++)
		a[i]=i+1;
	for(int i=0;i<n;i++)
		b[i]=a[i]*a[i]*a[i];
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int temp=b[i]+b[j];
			if(umap.find(temp)==umap.end())
				umap[temp].push_back(make_pair(a[i],a[j]));
			else
			{
				for(itr=umap[temp].begin();itr!=umap[temp].end();itr++)
				{
					cout<<(*itr).first<<" "<<(*itr).second<<" "<<a[i]<<" "<<a[j]<<endl;
				}
				umap[temp].push_back(make_pair(a[i],a[j]));
			}
		}
	}	
	return 0;
}
