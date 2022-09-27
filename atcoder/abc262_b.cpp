#include<bits/stdc++.h>
using namespace std;
bool b[105][105];
int main()
{
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int u,v;
		cin>>u>>v;
		b[u][v]=b[v][u]=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			for(int k=j+1;k<=n;k++)
			{
				if(b[i][j]==1&&b[j][k]==1&&b[k][i]==1)
				{
					ans++;
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

