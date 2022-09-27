#include<bits/stdc++.h>
#define int long long
using namespace std;

/*±œ¿œ ¶*/
int f[3010][3010];
int a[3010];
int b[3010];
int n,z;
const int mod=998244353;
void main_bk()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	for(int i=0;i<3010;i++)
	{
		f[0][i]=1;
	}
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=a[i];j<=b[i];j++)
		{
			f[i][j]=f[i-1][j]; 
		}
		for(int j=1;j<3010;j++)
		{
			f[i][j]=(f[i][j]+f[i][j-1])%mod;
		}
	}
	cout<<f[n][3000]<<endl;
}
main()
{
	main_bk();

}

