#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3,"Ofast","inline")
#include<iostream>
using namespace std;
int a[100001];
int m,k,l,r,x,sum,i,n;
#define getchar() p1==p2&&(p2=(p1=buf)+fread(buf,1,1000000,stdin),p1==p2)?EOF:*p1++
char buf[1000000],*p1=buf,*p2=buf;
inline int read()
{
    register char c=getchar();register int x=0;
    while(c<'0'||c>'9')c=getchar();
	while(c>='0'&&c<='9')x=(x<<1)+(x<<3)+(c^48),c=getchar();
    return x;
}
int main()
{
    n=read();
    m=read();
    for(i=1;i<=n;a[i++]=read());
    while(m--)
    {
        k=read();
        l=read();
        r=read();
        x=read();
        if(k==1)
        {
            for(i=l;i<=r;i++)
            {
                a[i]-=(a[i]>x)?x:0;
            }
        }
        else
        {
            sum=0;
            for(i=l;i<=r;sum+=!(a[i++]-x));
            printf("%d\n",sum);
        }
    }
    return 0;
}
