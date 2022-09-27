#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
	int n,sum=0;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		int xx=min(a[i+1],a[i]),yy=max(a[i+1],a[i]);
		if(yy>xx*2)
		{
			// cout<<"xx:"<<xx<<" yy:"<<yy<<endl;
			int x=xx;
			while(x*2<yy)
			{
				sum++;
				x*=2;
				// cout<<x<<endl;
			}

		}
	}
	cout<<sum<<endl;
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