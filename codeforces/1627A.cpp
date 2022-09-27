#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3,"Ofast","inline")
#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,m,r,cc,f=0,f1=0;
	cin>>n>>m>>r>>cc;
	char c[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>c[i][j];
			if(c[i][j]=='W')f=1;
			if(c[i][j]=='B')f1=1;
		}
	}
	if(c[r-1][cc-1]=='B'){puts("0");return;}
	if(f1==0){puts("-1");return;}
	for(int j=0;j<m;j++)
	{
		if(c[r-1][j]=='B')
		{
			puts("1");
			return;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(c[i][cc-1]=='B')
		{
			puts("1");
			return;
		}
	}
	puts("2");
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
