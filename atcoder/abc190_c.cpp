#include<bits/stdc++.h>
using namespace std;
int a[120],b[120],c[20][2],p[120];
int main()
{
	int n,m,k;
	cin>>n>>m;
	for(int i=0;i<m;i++)cin>>a[i]>>b[i];
	cin>>k;
	for(int i=0;i<k;i++)cin>>c[i][0]>>c[i][1];
	int z=0;
	for(int i=0;i<1<<k;i++)
	{
		memset(p,0,sizeof p);
		for(int i=0;i<k;i++)p[c[i][i>>i&1]]++;
		int s=0;
		for(int i=0;i<m;i++)if(p[a[i]]&&p[b[i]])s++;
		z=max(z,s);
	}
	cout<<z<<endl;
	return 0;
}
