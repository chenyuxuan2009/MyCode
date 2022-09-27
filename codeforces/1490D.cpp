#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n,maxx=INT_MIN,id,dep;
bool over;
int a[105];
bool f[105];
void find(int l,int r,int dep)
{	
	int ma=INT_MIN,ix;
	for(int i=l;i<=r;i++)
	{
		if(a[i]>ma&&!f[i])
		{
			ma=a[i];
			ix=i;
		}
	}
	f[ix]=1;
	a[ix]=dep;
	if(l<ix)find(l,ix-1,dep+1);
	if(ix<r)find(ix+1,r,dep+1);
}
void solve()
{
	cin>>n;
	maxx=INT_MIN;
	dep=0;
	over=1;
	memset(a,0,sizeof(a));
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>maxx)
		{
			maxx=a[i];
			id=i;
		}
	}
	f[id]=1;
	a[id]=dep;
	if(1<id)find(1,id-1,dep+1);
	if(id<n)find(id+1,n,dep+1);
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
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