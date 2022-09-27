#include<bits/stdc++.h>
using namespace std;
void solve()
{
	long long n,x;
	cin>>n;
	long long s=0;
	for(int i = 0; i < n + 2; i++)
	{
		long long x;
		cin>>x;
		s^=x;
	}
	cout<<(s&1?"Bob":"Alice")<<endl;
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
