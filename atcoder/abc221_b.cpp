#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
string s,t;
int f,x;
main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdin);
	cin>>s>>t;
	for(int i=0;i<s.size();i++)
	{
		if(s[i+1]!=t[i+1]&&s[i]!=t[i])
		{
			f++;
			if(s[i]==t[i+1]&&s[i+1]==t[i])x=-1;
		}
	}
	cout<<((s==t||f==1&&x==-1)?"Yes":"No");
	gt:;
}
