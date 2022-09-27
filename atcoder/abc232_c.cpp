#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int a[101][101],b[101][101],p[9];
main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		p[i]=i;
	}
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		a[x][y]=a[y][x]=1;
	}
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		b[x][y]=b[y][x]=1;
	}
	do
	{
		bool f=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[i][j]!=b[p[i]][p[j]])
				{
					f=0;
				}
			}
		}
		if(f==1)
		{
			puts("Yes");
			return 0;
		}
	}while(next_permutation(p+1,p+n+1));
	puts("No");
}


