#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int n,p,x,m,s;
int t[120];
main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t[i];
		s+=t[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>p>>x;
		cout<<s-t[p]+x<<endl;
	}
}


