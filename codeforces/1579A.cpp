#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
string s; 
int t;
main()
{
	cin>>t;
	while(t--)
	{
		cin>>s;
		int s1=0,s2=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='B')s1++;
			else s2++;
		}
		cout<<(s1==s2?"YES\n":"NO\n");
	}
}
