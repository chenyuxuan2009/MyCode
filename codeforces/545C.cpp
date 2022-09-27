#include<bits/stdc++.h>
using namespace std;
int x[100020];
int h[100020];
int f[100020][3];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>h[i];
	}
	f[1][1]=1;
	f[1][2]=x[2]-x[1]>h[1];
	x[n+1]=2000000001;
	for(int i=2;i<=n;i++)
	{
		f[i][0]=max(max(f[i-1][0],f[i-1][1]),f[i-1][2]);
		if(h[i-1]+x[i-1]<x[i]-h[i])
		{
			f[i][1]=f[i-1][2]+1;		
		}
		if(x[i-1]<x[i]-h[i])
		{
			f[i][1]=max(f[i][1],max(f[i-1][0]+1,f[i-1][1]+1));
		}
		if(x[i]+h[i]<x[i+1])
		{
			f[i][2]=max(max(f[i-1][0],f[i-1][1]),f[i-1][2])+1;
		} 
	}
	cout<<max(max(f[n][0],f[n][1]),f[n][2])<<endl; 
    return 0;
}
