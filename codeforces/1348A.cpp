#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 10000005
inline int read()
{
   int s=0,w=1;
   char ch=getchar();
   while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
   return s*w;
}
int t,n,x,y;
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	t=read();
	while(t--)
	{
		x=0,y=0;
		n=read();
		for(int i=1;i<=n/2-1;i++)
			x+=pow(2,i);		
		x+=pow(2,n);
		for (int i=n/2;i<n;i++)
			y+=pow(2,i);
		printf("%lld\n",x-y);
	}
}



