#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
	long long c=a%b;
	while(c)
	{
		a=b;
		b=c;
		c=a%b;
	}
	return b;
}
int main()
{
	int jumps[]={2,4,5};
	long long caterpillar=3,branches=10;
	long long remaining_leaves=0;
	for(int i = 1; i < (1 << caterpillar); i++)
    { 
		long long lcm = 1;
		for(int j = 0; j < caterpillar; j++)
		{  
			if((1<<j) & i)//take element at only set bits
			{  
				lcm *= jumps[j]/gcd(lcm, jumps[j]);//to find product of each possible subset
			}
		}
		if(__builtin_popcount(i)&1)
			remaining_leaves += branches/lcm;//for odd number of elements of sets add 
		else
			remaining_leaves -= branches/lcm;//for even number of elements of sets subtract (covered twice)
	} 
	cout<<branches - remaining_leaves<<endl;
	return 0;
}
