#include<bits/stdc++.h>
using namespace std;
long long s[200005];
int main()
{
	long long n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s[a[i]]++;
	}
	long long x=n*(n-1)/2*(n-2)/3;//总数
	long long y=0,z=0;
	for(int i=1;i<=200000;i++)//三个一样
	{
		long long yy=0;
		if(s[i]>=3)
		{
			yy=s[i]*(s[i]-1)/2*(s[i]-2)/3;
		}
		y+=yy;
	}
	for(int i=1;i<=200000;i++)//两个一样
	{
		long long zz=0;
		if(s[i]>=2)
		{
			zz=s[i]*(s[i]-1)/2*(n-s[i]);
		}
		z+=zz;
	}
	cout<<x-y-z<<endl;
	return 0;
}