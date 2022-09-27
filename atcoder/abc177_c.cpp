#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=1e9+7;
int a[200000],s,ls,ans;
main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	for(int i=0;i<n;i++)
	{
		ls+=a[i];
		ans+=(s-ls)%mod*a[i]%mod;
	}
	cout<<ans%mod<<endl;
}


