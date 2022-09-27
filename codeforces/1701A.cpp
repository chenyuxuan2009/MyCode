#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int a11,a12,a21,a22;
	cin>>a11>>a12>>a21>>a22;
	if(a11+a12+a21+a22==3)cout<<1<<endl;
	else cout<<(a11+a12+a21+a22+1)/2<<endl;
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