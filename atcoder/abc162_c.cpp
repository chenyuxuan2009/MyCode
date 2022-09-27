#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
main()
{
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
			{
				ans+=__gcd(__gcd(i,j),k);
			}
		}
	}
	cout<<ans<<endl;
}
