#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
	map<int,bool>h;
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		while(a[i]>n||h.find(a[i])!=h.end())
		{
			if(a[i]==1)break;
			a[i]/=2;
		}
		h[a[i]]=1;
	}
	bool f=1;
	for(int i=1;i<=n;i++)
	{
		if(!h[i])
		{
			f=0;
			break;
		}
	}
	puts(f?"YES":"NO");
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