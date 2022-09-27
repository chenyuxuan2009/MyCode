#include<bits/stdc++.h>
#define long long
using namespace std;
const int mod=998244353;
int h,w,d[22][22],D,r,t[22][22],i,j,k,l;
char c;
void move(int i,int j,int n)
{
	if(t[i][j]&&(d[i][j]>n||d[i][j]==-1))
	{
		d[i][j]=n;
		move(i+1,j,n+1);
		move(i-1,j,n+1);
		move(i,j+1,n+1);
		move(i,j-1,n+1);
	}
}
main()
{
	cin>>h>>w;
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=w;j++)
		{
			cin>>c;
			t[i][j]=(c=='.');
		}
	}
	for(i=1;i<=h;i++)
	{
		for(j=1;j<=w;j++)
		{
			memset(d,-1,sizeof(d));
			move(i,j,0);
			D=0;
			for(k=1;k<=h;k++)
				for(l=1;l<=w;l++)
					D=max(D,d[k][l]);
			r=max(D,r);
		}
	}
	cout<<r;
	system("pause");
}

