#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s = "my name is bhaskar kumar";
	int l;
	while((l=s.find(' '))!=string::npos)
	{
		s.erase(l,1);
		s.insert(l,"%20");
	}
	cout<<s<<endl;
	return 0;
}
