#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,f;
string s[1001],t[1001];
signed main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i]>>t[i];
		for(int j=1;j<i;j++)
		{
			if(s[i]==s[j]&&t[i]==t[j])
			{
				f=1;
				goto gt;
			}
		}
	}
	gt:;
	if(f==0)puts("No");
	else puts("Yes");
}



