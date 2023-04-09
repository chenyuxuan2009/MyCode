#include<bits/stdc++.h>
using namespace std;
int fa[1000020];
int a[1000020];
pair<long long,long long>ans[1000020];
long long Gcd(long long x,long long y)
{
    return y?Gcd(y,x%y):x;
}
void chg(int i)
{
    long long g=Gcd(ans[i].first,ans[i].second);
    ans[i].first/=g;
    ans[i].second/=g;
}
int h[1000020];
int pre[1000020];
int nxt[1000020];
int p[1000020];
int n,len,ANS,q;
#define getchar() p1==p2&&(p2=(p1=buf)+fread(buf,1,1000000,stdin),p1==p2)?EOF:*p1++
char buf[1000000],*p1=buf,*p2=buf;
inline int read()
{
    register char c=getchar();register int x=0;
    while(c<'0'||c>'9')c=getchar();
	while(c>='0'&&c<='9')x=(x<<1)+(x<<3)+(c^48),c=getchar();
    return x;
}
struct node
{
	int L,R,id;	
}Query[1000020];
bool cmp(node a,node b)
{
	if(fa[a.L]!=fa[b.L])return a.L<b.L;
	if(fa[a.L]&1)return a.R>b.R;
	return a.R<b.R;
}
int main()
{
	n=read();q=read();
	len=sqrt(n);
	for(int i=1;i<=n;i++)
	{
		a[i]=read();
		fa[i]=(i+len-1)/len;
	}
	for(int i=1;i<=q;i++)
	{
		int L,R;
		L=read();R=read();
		Query[i]={L,R,i};
	}
	sort(Query+1,Query+q+1,cmp);
	int L=1,R=0;
	for(int i=1;i<=q;i++)
	{
        if(Query[i].L==Query[i].R)
        {
            ans[Query[i].id]=make_pair(0,1);
            continue;
        }
		while(L>Query[i].L)ANS+=h[a[--L]]++;
		while(R<Query[i].R)ANS+=h[a[++R]]++;	    
	    while(L<Query[i].L)ANS-=--h[a[L++]];
	    while(R>Query[i].R)ANS-=--h[a[R--]];
	    ans[Query[i].id]=make_pair(ANS,(long long)(R-L+1)*(R-L)/2);
	}
	for(int i=1;i<=q;i++)
	{
        chg(i);
		printf("%lld/%lld\n",ans[i].first,ans[i].second);
	}
	return 0;
}