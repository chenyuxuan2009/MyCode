#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int a[100005];
bool f[100005];
set<int>s;
main()
{
	int n,x,ans=1;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		f[i]=0;
	}
	f[x]=1;
	int i=x;
	while(1)
	{
		i=a[i];
		if(f[i]==1)break;
		f[i]=1;
		ans++;
	}
	cout<<ans<<endl;
}


