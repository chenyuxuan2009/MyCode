#include<bits/stdc++.h>
using namespace std;
int a[200005];
int fa[200005],id,c[200005],d[200005];
bool f[200005];
int ans[200005];
set<int>s;
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(s.size()==0||a[i]>*s.rbegin())
		{
			s.insert(a[i]);
			id++;
			fa[a[i]]=id;
			c[id]=a[i];
			d[id]++;
			if(d[id]==k)
			{
				f[id]=1;
				ans[id]=i;
				s.erase(a[i]);
			}
		}
		else
		{
			auto it=s.upper_bound(a[i]);
			int x=fa[*it];
			if(f[x]==1)
			{
				continue;
			}
			c[x]=a[i];
			d[x]++;
			fa[a[i]]=x;
			s.erase(it);
			s.insert(a[i]);
			if(d[x]==k)
			{
				f[x]=1;
				ans[x]=i;
				s.erase(a[i]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<(ans[fa[i]]==0?-1:ans[fa[i]])<<endl;
	}
	return 0;
}
