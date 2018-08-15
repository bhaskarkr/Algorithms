#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,7,5,9,2,12,3};
	int n =7,k=2;
	unordered_map <int,bool> umap;
	for(int i=0;i<n;i++)
	{	
		umap[a[i]]=true;
		if(umap[a[i]-k])
			cout<<a[i]-k<<" "<<a[i]<<endl;
		if(umap[a[i]+k])
			cout<<a[i]<<" "<<a[i]+k<<endl;
	}
	return 0;
}
