#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
void solve()
{
	int n,sum=0; 
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x; 
		sum+=x; 
	}
	cout<<ceil(sum*1.0/n)-floor(sum*1.0/n)<<endl;  
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}


