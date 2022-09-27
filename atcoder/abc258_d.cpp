#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
ll a[200005],b[200005],c[200005];
int main()
{
	ll n,x;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		c[i]=c[i-1]+a[i]+b[i];
	}
	ll ans=1e20;
	for(int i=1;i<=n;i++)
	{
		ll y=i-1;
		if(y>=x)
		{
			ans=min(ans,c[i-1]);
		}
		else
		{
			ll z=x-y,cnt=c[i-1];
			z--;
			cnt+=a[i]+b[i];
			cnt+=z*b[i];
			ans=min(ans,cnt);
		}
	}
	cout<<ans<<endl;
	return 0;
}