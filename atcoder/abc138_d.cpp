#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int n,q,b[200005];
vector<int>a[200005];
void dfs(int n,int f)
{
	b[n]+=b[f];
	for(int i:a[n])
		if(i!=f)
			dfs(i,n);
}
main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdin);
	cin>>n>>q;
	for(int i=0;i<n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i=0;i<q;i++)
	{
		int p,x;
		cin>>p>>x;
		b[p]+=x;
	}
	dfs(1,0);
	for(int i=1;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
}
