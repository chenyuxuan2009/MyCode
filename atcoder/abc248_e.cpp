#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<climits>
typedef long long ll;
using namespace std;
const int mod=998244353;
int x[305],y[305];
int check(int i,int j,int k)
{
	return (x[j]-x[i])*(y[k]-y[i])-(x[k]-x[i])*(y[j]-y[i])==0;
}
void solve()
{
	int n,k,ans=0;
	cin>>n>>k;
	if(k==1)
	{
		puts("Infinity");
		return;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			int sum=0;
			for(int kk=1;kk<=n;kk++)
			{
				if(check(i,j,kk))
				{
					if(kk!=i&&kk<j)
					{
						sum=0;
						break;
					}
					sum++;
				}
			}
			if(sum>=k)
			{
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}
int main()
{
//	freopen("example.in","r",stdin);
//	freopen("example.out","w",stdout);
//	std::ios::sync_with_stdio(false);
//	cin.tie(nullptr);cout.tie(nullptr);
	int t=1;
	while(t--)
	{
		solve();
	}
    return 0;
}
