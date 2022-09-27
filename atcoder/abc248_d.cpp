#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<climits>
typedef long long ll;
using namespace std;
const int mod=998244353;
vector<int>v[200005];
int a[200005];
void solve()
{
	int n,q;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		v[a[i]].push_back(i);
	}
	cin>>q;
	while(q--)
	{
		int l,r,k;
		cin>>l>>r>>k;
		long long ans=upper_bound(v[k].begin(),v[k].end(),r)-lower_bound(v[k].begin(),v[k].end(),l);
		cout<<ans<<endl;
	}
}
int main()
{
//	freopen("example.in","r",stdin);
//	freopen("example.out","w",stdout);
//	std::ios::sync_with_stdio(false);
//	cin.tie(nullptr);cout.tie(nullptr);
	int t=1;
	while(t--)
	{
		solve();
	}
    return 0;
}
