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
		int n,l,r,k,ans=0;
		cin>>n>>l>>r>>k;
		int a[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];	
		}	
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++)
		{
			if(a[i]>=l&&a[i]<=r&&k>=a[i])
			{
				ans++;
				k-=a[i];
			}
		}
		cout<<ans<<endl;
	} 
}


