#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,maxx=INT_MIN,minn=INT_MAX;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<a[n]+a[n-1]-a[1]-a[2]<<endl;
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

