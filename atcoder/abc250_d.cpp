#include<bits/stdc++.h>
using namespace std;
bool pri[1000005];
int prime[1000005];
void init(int n)
{
	pri[0]=pri[1]=1;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(!pri[i])
		{
			for(int cnt=2;cnt<=n/i;cnt++)
			{
				pri[i*cnt]=1;
			}
		}
	}
}
int main()
{
	long long n,ans=0;
	cin>>n;
	init(1000000);
	prime[0]=prime[1]=0;
	prime[2]=1;
	for(long long i=3;i<=1000000;i++)
	{
		prime[i]=(pri[i]==0)+(prime[i-1]);
	}
	for(long long i=2;i*i*i<=n;i++)//q
	{
		if(pri[i]==0)
		{
			long long j=n/(i*i*i);
			if(j>=i)j=i-1;
			ans+=prime[j]-prime[1];
		}
	}
	cout<<ans<<endl;
	return 0;
}