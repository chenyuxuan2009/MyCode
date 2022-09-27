#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
void solve()
{
	string a,b;
	int n;
	cin>>n>>a>>b;
	int x=0,y=0,z=n+1,c=0;
	for(int i=0;i<n;i++)
	{
		x+=a[i]=='1';
		y+=b[i]=='1';
		c+=a[i]!=b[i];
	}
	z=(x==y?min(z,c):z);
	z=(n-x+1==y?min(z,n-c):z);
	z=(z==n+1?-1:z);
	cout<<z<<endl;
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

