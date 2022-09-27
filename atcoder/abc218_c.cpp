#include<bits/stdc++.h>
using namespace std;
#define int long long
char s[205][205];
char t[205][205];
char sl[205][205];
char sr[205][205];
int n;
bool f;
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>s[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>t[i][j];
			if(t[i][j]!=s[i][j])f=1;
		}
	}
	if(f==0)
	{
		puts("Yes");
		goto gt;
	}
	f=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=n;j>=1;j--)
		{
			if(s[j][i]!=t[i][j])
			{
				f=1;
				goto f1;
			}
		}
	}
	f1:
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(s[j][i]!=t[i][j])
			{
				puts("No");
				goto gt;
			}
		}
	}
	puts("Yes");
	gt:;
}



