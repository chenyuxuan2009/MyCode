#include<bits/stdc++.h>
using namespace std;
int s0,t0,st;
int main()
{	
	int n;
	string s,t;
	cin>>n>>s>>t;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')s0++;
		if(t[i]=='0')t0++;
		if(s[i]=='0'&&t[i]=='0'&&t0==s0)st++;
	}
	if(s0!=t0)cout<<-1;
	else cout<<s0-st;
	return 0;
}


