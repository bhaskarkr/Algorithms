#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s="abbc",b="cbabadcbbabbcbabaabccbabc";
	int S=s.length(),B=b.length();
	unordered_map<char,int> pattern,window;
	for(int i=0;i<S;i++)
		pattern[s[i]]++;
	int start=0;
	for(int i=0,j;i<B;i++)
	{
		if(i>=S&&window.find(b[i-S])!=window.end())
		{	
			if(window[b[i-S]]<=1)
				window.erase(b[i-S]);
			else
				window[b[i-S]]--;
		}
		if(pattern.find(b[i])==pattern.end())
			start=i+1;
		else
		{
			window[b[i]]++;
			if(i-start+1==S)
			{	
				for(j=0;j<S;j++)
					if(pattern[s[j]]!=window[s[j]])
						break;
				if(j==S)
					cout<<start<<" "<<b.substr(start,S)<<endl;
			}
		}		
		if(i-start+1>=S)
			start++;	
	}
	return 0;
}
