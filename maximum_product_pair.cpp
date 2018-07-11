/*
	* ALGORITHM - to find maximum product pair
	* AUTHOR - TENSORED
	* DATE - 11/7/2018
	* ORDER - O(n)::SINGLE TRAVERSAL
	* DATA STRUCTURE USED - ARRAY
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,max1=INT_MIN,max2=INT_MIN,min1=INT_MAX,min2=INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(a<min1)
		{
			min2=min1;
			min1=a;
		}
		else if(a<min2)
			min2=a;
		if(a>max1)
		{
			max2=max1;
			max1=a;
		}
		else if(a>max2)
			max2=a;
	}
	if(min2*min1>max1*max2)
		cout<<min1<<" "<<min2<<endl;
	else
		cout<<max1<<" "<<max2<<endl;
	return 0;
}
