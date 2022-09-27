#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int x=1;
	while(x*2<n)
	{
		x*=2;
	}
	for(int i=1;i<x;i++)cout<<i<<" ";
	cout<<"0 "<<x<<" ";
	for(int i=x+1;i<n;i++)cout<<i<<" ";
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
