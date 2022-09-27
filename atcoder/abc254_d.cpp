#include<bits/stdc++.h>
using namespace std;
int a[1000],sz;
int main()
{
	int n;
	long long ans=0;
	cin>>n;
	for(int i=1;i<=sqrt(n);i++)
	{
		a[++sz]=i*i;
	}
	for(int i=1;i<=sz;i++)
	{
		for(int j=1;j<=sz;j++)
		{
			if(__gcd(a[i],a[j])==1)
			{
				ans+=n/max(a[i],a[j]);
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

