
/*
	* ALGORITHM - to find if subarray with sum=0 exist or not 
	* AUTHOR - TENSORED
	* DATE - 7/7/2018
	* ORDER - O(n)
	* DATA STRUCTURE USED - UNORDERED SET
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	unordered_set <int> uset;
	int n,a;
	uset.insert(0);//so that if we get sum 0 later we can say that subarray found
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(uset.find(a)!=uset.end())
		{
			cout<<"subarray found\n";
			return 0;
		}
		uset.insert(a);
	}
	cout<<"subarray not found\n";
	return 0;
}
