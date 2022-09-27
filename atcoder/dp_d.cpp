#include<bits/stdc++.h>
using namespace std;
long long f[100020];
int a[120];
int b[120];
int main()
{
	int v,n;
	cin>>n>>v;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=v;j>=a[i];j--)
		{
			f[j]=max(f[j],f[j-a[i]]+b[i]);
		}
	}
	cout<<f[v]<<endl;
	return 0;
}

