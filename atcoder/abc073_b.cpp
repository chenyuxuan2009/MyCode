#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	int t,ans=0;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		ans+=abs(x-y)+1;
	}
	cout<<ans<<endl;
}


