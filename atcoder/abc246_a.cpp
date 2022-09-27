#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<map>
typedef long long ll;
using namespace std;
void solve()
{
	int a[205]={};
	int b[205]={};
	for(int i=1;i<=3;i++)
	{
		int x,y;
		cin>>x>>y;
		a[x+100]++;
		b[y+100]++;
	}
	for(int i=0;i<=200;i++)
	{
		if(a[i]==1)cout<<i-100<<" ";
	}
	for(int i=0;i<=200;i++)
	{
		if(b[i]==1)cout<<i-100<<" ";
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