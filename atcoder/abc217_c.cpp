#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
int n,a[N];
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		a[x]=i;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	gt:;
}



