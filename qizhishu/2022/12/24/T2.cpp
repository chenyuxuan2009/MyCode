#include<bits/stdc++.h>
using namespace std;
char mp[10][10];
const int n=8;
bool ok(int i,bool f)
{
	bool ret=1;
	for(int j=2;j<=n;j++)
	{
		if(f)ret&=(mp[i][j]==mp[i][j-1]);
		else ret&=(mp[j][i]==mp[j-1][i]);
	}
	return ret;
}
void solve()
{	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>mp[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(mp[i][j]!='.'&&(ok(i,1)||ok(j,0)))
			{
				printf("%c\n",mp[i][j]);
				return;
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}