#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,m,rb,rd,cb,cd;
	cin>>n>>m>>rb>>cb>>rd>>cd;
	int ans=0;
	int x=1,y=1;
	while(rb!=rd&&cb!=cd)
	{
		if(rb==n)
		{
			x=-1;
		}
		if(cb==m)
		{
			y=-1;
		}
		rb+=x;
		cb+=y;
		ans++;
	}
	cout<<ans<<endl;
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
