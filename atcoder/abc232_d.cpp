#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
char c[101][101];
bool f[101][101];
int z=1;
main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>c[i][j];
		}
	}
	f[1][1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(c[i][j]=='.'&&(f[i-1][j]==1||f[i][j-1]==1))
			{
				f[i][j]=1;
				z=max(z,i+j+1);
			}
		}
	}
	cout<<(z==1?z:z-2)<<endl;
}


