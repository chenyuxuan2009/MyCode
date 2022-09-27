#include<bits/stdc++.h>
using namespace std;
struct node
{
	long long a,id,win;	
};
void solve()
{
	queue<node>q;
	long long n,qu;
	cin>>n>>qu;
	node a[n+1];
	pair<long long,long long>ans[n+1];
	long long maxn=-1;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].a;
		maxn=max(maxn,a[i].a);
		a[i].id=i;
		q.push(a[i]);
		ans[i].first=ans[i].second=1;
	}
	node tp=q.front();
	q.pop();
	for(int i=1;i<n;i++)
	{
		node u=q.front();
		q.pop();
		if(u.a>tp.a)
		{
			ans[tp.id].second=i;
			tp=u;
			ans[tp.id].first=i;
		}
		else
		{
			ans[tp.id].first;
		}
	}
	ans[tp.id].second=n+1;
//	for(int i=1;i<=n;i++)
//	{
//		printf("%d %d\n",ans[i].first,ans[i].second);
//	}
	while(qu--)
	{
		long long x,k;
		cin>>x>>k;
		long long z=ans[x].second-ans[x].first;
		if(a[x].a==maxn)
		{
			cout<<max(0LL,k-ans[x].first+1)<<endl;
		}
		else 
		{
			if(ans[x].second<=k)cout<<z<<endl;
			else cout<<max(0LL,k-ans[x].first+1)<<endl;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}

