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
		int n,now=0,ans=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(x>i)ans+=x-i,n+=x-i,i+=x-i;
		}
		cout<<ans<<endl; 
	}
}

