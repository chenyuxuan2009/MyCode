#include<bits/stdc++.h>
using namespace std;
int a[100020];
int b[100020];
long long f[100020][3];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
	}
	f[1][1]=1LL*a[1];
	f[1][2]=1LL*b[1];
	for(int i=2;i<=n;i++)
	{
		f[i][0]=1LL*max(max(f[i-1][0],f[i-1][1]),f[i-1][2]);
		f[i][1]=1LL*max(f[i-1][0],f[i-1][2])+1LL*a[i];
		f[i][2]=1LL*max(f[i-1][0],f[i-1][1])+1LL*b[i];
	}
	cout<<max(max(f[n][0],f[n][1]),f[n][2])<<endl; 
    return 0;
}
