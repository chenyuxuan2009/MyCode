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
int n,q;
int x,y;
int a[100020];
int p[100020];
int dep[100020];
long long val[100020];
unordered_map<int,long long>f[100020];
long long dfs(int x,int y)
{
    if(x==y)return val[x];
    if(x>y)swap(x,y);
    if(x==0||y==0)return 0;
    if(f[x].count(y))return f[x][y];
    if(dep[x]<=1000)
    {
        long long ans=0;
		while(x!=y) 
        {
			ans+=1LL*a[x]*a[y];
			x=p[x],y=p[y];
		}
		return f[x][y]=ans+val[x];
    }
    return f[x][y]=dfs(p[x],p[y])+1LL*a[x]*a[y];
}
int main()
{
    n=read();q=read();
    for(int i=1;i<=n;a[i++]=read());
    val[1]=1LL*a[1]*a[1];
    dep[1]=1;
    for(int i=2;i<=n;i++)val[i]=val[p[i]=read()]+1LL*a[i]*a[i],dep[i]=dep[p[i]]+1;
    while(q--)
    {
        printf("%lld\n",dfs(read(),read()));
    }
    return 0;
}