#include<bits/stdc++.h>
using namespace std;
set<int>s;
int main()
{
	string s,t;
	cin>>s>>t;
	bool flag=(s==t);
	for(int i=0;i<(int)t.size()-(int)s.size();i++)
	{
		int k=0;
		bool f=1;
		for(;k<s.size();k++)
			if(s[k+i]!=t[k+i])f=0;
		if(f)flag=1;
	}
	puts(flag?"Yes":"No");
	return 0;
}