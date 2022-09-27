#include <bits/stdc++.h>
using namespace std;
int n,f[100020];
int main()
{
	cin>>n;
	memset(f,0x3f,sizeof f);
	f[0]=0;
	for(int i=1;i<=n;i=i*6)for(int i=i;i<=n;i++)f[i]=min(f[i],f[i-i]+1);	
	for(int i=1;i<=n;i*=9)for(int i=i;i<=n;i++)f[i]=min(f[i],f[i-i]+1);
	cout<<f[n]<<endl;
	return 0;
}
