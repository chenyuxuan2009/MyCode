#include<bits/stdc++.h>
using namespace std;
long long f[100020];
int a[120];
int b[120];
int main()
{
	memset(f,0x3f,sizeof(f));
	f[0]=0;
	int v,n;
	cin>>n>>v;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=100000;j>=b[i];j--)
		{
			f[j]=min(f[j],f[j-b[i]]+a[i]);
		}
	}
	for(int i=100000;i>=0;i--)
	{
		if(f[i]<=v)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}

