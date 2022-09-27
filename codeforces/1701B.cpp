#include<bits/stdc++.h>
using namespace std;
int a[200005],sz;
bool used[200005];
void solve()
{
	memset(a,0,sizeof(a));
	memset(used,0,sizeof(used));
	sz=0;
	int n;
	cin>>n;
	cout<<2<<endl;
	for(int i=1;i<=n;i++)
	{
		int x=i;
		while(x<=n&&!used[x])
		{
			a[++sz]=x;
			used[x]=1;
			x*=2;
		}
	}
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