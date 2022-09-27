#include<iostream>
using namespace std;
const int mod=998244353;
int n,k,f[100001][10];
int main()
{
	scanf("%d%d",&n,&k);
	f[1][k]=1;
	for(int i=2;i<=n;i++)
	{
		scanf("%d",&k);
		for(int j=0;j<=9;j++)
		{
			f[i][(j+k)%10]=(f[i][(j+k)%10]+f[i-1][j])%mod;
			f[i][(j*k)%10]=(f[i][(j*k)%10]+f[i-1][j])%mod;
		}
	}
	for(int i=0;i<=9;i++)cout<<f[n][i]<<endl;
}
