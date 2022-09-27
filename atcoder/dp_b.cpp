#include<bits/stdc++.h>
using namespace std;
int a[100020];
int f[100020]; 
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	memset(f,0x3f,sizeof(f));
	for(int i=1;i<=k;i++)
	{
		f[1+i]=abs(a[1]-a[1+i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			if(j+i>n)break;
			f[i+j]=min(f[i+j],f[i]+abs(a[i+j]-a[i]));
		}
	}
	cout<<f[n]<<endl;
	return 0;
}
