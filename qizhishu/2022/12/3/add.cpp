#include<bits/stdc++.h>
using namespace std;
int n;
long long ans;
pair<int,int>a[100020];
int fa[300020];
int Find(int u)
{
	return fa[u]<0?u:fa[u]=Find(fa[u]);
}
void Union(int u,int v)
{
	u=Find(u);
    v=Find(v);
    if(u==v)return;
    if(fa[u]>fa[v])swap(fa[u],fa[v]);
    fa[u]+=fa[v];
    fa[v]=u;
}
set<int>s[114514*3][2];
int main()
{
	memset(fa,-1,sizeof(fa));
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&a[i].first,&a[i].second);
		Union(i,a[i].first+200000);
		Union(i,a[i].second+100000);
	}
	for(int i=1;i<=n;i++)
	{
		s[Find(i)][0].insert(a[i].first);
		s[Find(i)][1].insert(a[i].second);
	}
	for(int i=1;i<=300000;i++)
	{
		ans+=(long long)s[i][0].size()*(long long)s[i][1].size();
	}
	printf("%lld\n",ans-n);
	return 0;
}
/*
9
1 1
1 2
1 3
1 4
1 5
2 1
3 1
4 1
5 1
*/