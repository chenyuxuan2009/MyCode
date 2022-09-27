#include<bits/stdc++.h>
using namespace std;
struct node
{
	int a,b;
};
bool cmp(node a,node b)
{
	return a.a<b.a;
}
void solve()
{
	int k,n;
	cin>>n>>k;
	node a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].a;
		a[i].b=i;
	}
	sort(a+1,a+n+1,cmp);
	int ans=0;
	for(int i=1;i<=k;i++)
	{
		ans+=a[i].b>k;
	}
	cout<<ans<<endl;
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

