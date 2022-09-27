#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200010];
int b[200010];
int c[1000010];
vector<int> v;
map<int,int> m;
int ans[2000010];
main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdin);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		m[x]++;
		m[x+y]--;
	}
	int x=0,l=0;
	for(auto i:m)
	{
		ans[x]+=i.first-l;
		l=i.first;
		x+=i.second;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<' ';
	}
}


