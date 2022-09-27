#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,r,n,ans=1;
		cin>>l>>r>>n;
		while(l%2==0)
		{
			l/=2;
			ans*=2;
		}
		while(r%2==0)
		{
			r/=2;
			ans*=2;
		}
		puts(ans>=n?"YES":"NO");
	}
}

