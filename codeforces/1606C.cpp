#include<bits/stdc++.h>
using namespace std;
long long n,k,t;
long long a[20],d[20];
int main()
{
	d[0]=1;
	for(int i=1;i<19;i++)
	{
		d[i]=d[i-1]*10;
	}
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		a[n]=18;
		long long z=0;
		for(int i=0;i<n;i++)
		{
			long long u=min(d[a[i+1]-a[i]]-1,k+1);
			z+=u*d[a[i]];
			k-=u;
		}
		cout<<z<<"\n";
	}
	return 0;
}


