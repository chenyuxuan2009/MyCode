#include<bits/stdc++.h>
using namespace std;
const int N=5005,mod=1e9+7;
int n,m,f[2][N][N];
char s[N][N];
void solve(int t,int x,int y)
{
	if(s[x][y]=='.')
	f[t][x][y]=1;
	for(int i=x;i<=n;i++)
		for(int j=y;j<=m;j++)
			if(s[i][j]=='.'&&(i!=x||j!=y))
				f[t][i][j]=(f[t][i-1][j]+f[t][i][j-1])%mod;
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)scanf("%s",s[i]+1);
	solve(0,1,2);
	solve(1,2,1);
	printf("%d\n",(1ll*f[0][n-1][m]*f[1][n][m-1]%mod-1ll*f[0][n][m-1]*f[1][n-1][m]%mod+mod)%mod);
	return 0;
}
