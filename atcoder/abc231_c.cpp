#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	int n,q;
	cin>>n>>q;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<q;i++)
	{
		int x;
		cin>>x;
		int ans=lower_bound(a,a+n,x)-a;
		cout<<n-ans<<endl;
	}
}


