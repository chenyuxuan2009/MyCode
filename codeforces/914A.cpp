#include<bits/stdc++.h>
using namespace std;
long long  a[1000];
bool f[1000];
int main()
{
	long long n,maxx=INT_MIN;
	cin>>n; 
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		f[i]=0;
	}
	for(long long i=1;i<=n;i++)
	{
		for(long long j=0;j*j<=a[i];j++)
		{
			if(j*j==a[i])
			{
				f[i]=1;
				break;
			}
		}
		if(f[i]==0)
		{
			if(a[i]>maxx)
			{
				maxx=a[i];
			}
		}
	}
	cout<<maxx;
	return 0;
}


