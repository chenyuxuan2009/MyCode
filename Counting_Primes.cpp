#include<bits/stdc++.h>
#define getchar() p1==p2&&(p2=(p1=buf)+fread(buf,1,1000000,stdin),p1==p2)?EOF:*p1++
char buf[1000000],*p1=buf,*p2=buf;
inline int read()
{
    register char c=getchar();register int x=0;
    while(c<'0'||c>'9')c=getchar();
	while(c>='0'&&c<='9')x=(x<<1)+(x<<3)+(c^48),c=getchar();
    return x;
}
using namespace std;
bool pri[1000005];
void init(int n)
{
	pri[0]=pri[1]=1;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(!pri[i])
		{
			for(int cnt=2;cnt<=n/i;cnt++)
			{
				pri[i*cnt]=1;
			}
		}
	}
}
void solve(int TestCase)
{
    printf("Case %d:\n",TestCase);
    int n,m;
    n=read();m=read();
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        a[i]=read();
    }
    while(m--)
    {
        int op;//wc,op!
        op=read();
        if(op==0)
        {
            int L,R,x;
            L=read();R=read();x=read();
            for(int i=L;i<=R;i++)
            {
                a[i]=x;
            }
        }
        else
        {
            int L,R,ans=0;
            L=read();R=read();
            for(int i=L;i<=R;i++)
            {
                ans+=(!pri[a[i]]);
            }
            printf("%d\n",ans);
        }
    }
}
int main()
{
    init(1000000);
    int t;cin>>t;for(int _=1;_<=t;_++)
    solve(_);
    return 0;
}