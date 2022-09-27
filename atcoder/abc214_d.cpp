#include<bits/stdc++.h>
using namespace std;
int f[200010];
int c[200010];
int n,m;
long long ans;
pair<int,pair<int,int> > a[500010];
int F(int x)
{
	if(f[x]==x)
	{
		return x;
	}
	f[x]=F(f[x]);
	return f[x];
}
int main(){
	cin>>n;
	m=n-1;
	for(int i=1;i<=n;i++)
	{
		f[i]=i;
		c[i]=1;
	}
	for(int i=0;i<m;i++)
	{
		cin>>a[i].second.first>>a[i].second.second>>a[i].first;
	}
	sort(a,a+m);
	for(int i=0;i<m;i++)
	{
		int x=F(a[i].second.first);
		int y=F(a[i].second.second);
		ans+=(long long)a[i].first*c[x]*c[y];
		f[x]=y;
		c[y]+=c[x];
	}
	cout<<ans<<endl;
	return 0;
}
