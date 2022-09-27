#include<bits/stdc++.h>
using namespace std;
int a[100020];
int f[100020];
int g[100010];
int z;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		f[i]=__gcd(f[i-1],a[i]);
	}
	for(int i=n;i>0;i--)
	{
		g[i]=__gcd(g[i+1],a[i]);
		z=max(z,__gcd(f[i-1],g[i+1]));
	}
	cout<<z;
	return 0;
}
