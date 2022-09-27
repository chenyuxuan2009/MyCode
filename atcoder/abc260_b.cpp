#include<bits/stdc++.h>
using namespace std;
pair<int,int>a[1005];
pair<int,int>b[1005];
pair<int,int>c[1005];
set<int>ans;
bool f[1005];
bool cmp(pair<int,int>a,pair<int,int>b)
{
	if(a.first!=b.first)return a.first>b.first;
	return a.second<b.second;
}
int main()
{
	int n,x,y,z;
	cin>>n>>x>>y>>z;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].first;
		a[i].second=i;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b[i].first;
		b[i].second=i;
		c[i].first=a[i].first+b[i].first;
		c[i].second=i;
	}
	sort(a+1,a+n+1,cmp);
	sort(b+1,b+n+1,cmp);
	sort(c+1,c+n+1,cmp);
	for(int i=1;i<=x;i++)
	{
		if(!f[a[i].second])
		{
			f[a[i].second]=1;
			ans.insert(a[i].second);
		}
		else
		{
			x++;
		}
	}
	for(int i=1;i<=y;i++)
	{
		if(!f[b[i].second])
		{
			f[b[i].second]=1;
			ans.insert(b[i].second);
		}
		else
		{
			y++;
		}
	}
	for(int i=1;i<=z;i++)
	{
		if(!f[c[i].second])
		{
			f[c[i].second]=1;
			ans.insert(c[i].second);
		}
		else
		{
			z++;
		}
	}
	for(int i:ans)cout<<i<<endl;
	return 0;
}