#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3,"Ofast","inline")
#include<bits/stdc++.h>
using namespace std;
int juli(int x1,int y1,int x2,int y2)
{
	return abs(x1-x2)+abs(y1-y2);
}
void solve()
{
	multiset<int>s;
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			s.insert(max({juli(i,j,1,1),juli(i,j,1,m),juli(i,j,n,1),juli(i,j,n,m)}));
		}
	}
	for(auto i:s)cout<<i<<" ";
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
