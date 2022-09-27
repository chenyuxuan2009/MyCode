#include<bits/stdc++.h>
#define ll long long
#define p1 998244353
#define p2 1000000007
using namespace std;
int n,m,i,j,x,t,a[100002];
bool b[100002],c[100002];
int main()
{
	scanf("%d%d",&n,&m);
	while(n--)
	{
		scanf("%d",&x);
		for(i=2;i<=sqrt(x);i++)
			if(x%i==0)
			{
				b[i]=true;
				while(x%i==0)
				x/=i;
			}
		if(x>1)
			b[x]=true;
	}
	for(i=2;i<=m;i++)
		if(b[i])
			for(j=i;j<=m;j+=i)
				c[j]=true;
	for(i=1;i<=m;i++)
		if(!c[i])
			a[++t]=i;
	printf("%d\n",t);
	for(i=1;i<=t;i++)
		printf("%d\n",a[i]);
 	return 0;
}
