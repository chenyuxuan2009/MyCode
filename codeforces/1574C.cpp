#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200020];
long long s,x,y;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	sort(a,a+n);
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		int p=lower_bound(a,a+n,x)-a;
		long long z=2e18;
		if(p<n)
		{
			z=min(z,max(y-(s-a[p]),0LL));
		}
		if(p>0)
		{
			z=min(z,max(y-(s-a[p-1]),0LL)+x-a[p-1]);
		}
		cout<<z<<"\n";
	}
	return 0;
}


