#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<set>
#define ll long long
using namespace std;
const int mod=998244353;
const int N=1e12;
inline ll read()
{
    ll x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}
    return x*f;
}
void write(int x)
{
    if(x<0){putchar('-');x=-x;}
    if(x>9)write(x/10);
    putchar(x%10+'0');
}
ll f[20];
void solve()
{
	ll n=read();
	ll z=99;
	for(ll i=0;i<1<<12;i++)
	{
		ll m=n;
		ll c=0;
		for(ll j=0;j<12;j++)
		{
			if(i>>j&1)
			{
				c++;
				m-=f[j+3];
			}
		}
		if(m>=0)z=min(z,c+__builtin_popcountll(m));
	}
	cout<<z<<"\n";
}
int main()
{
//	freopen("example.in","r",stdin);
//	freopen("example.out","w",stdout);
//	std::ios::sync_with_stdio(false);
//	cin.tie(nullptr);cout.tie(nullptr);
	f[0]=1;
	for(int i=1;i<=14;i++)f[i]=f[i-1]*i;
	int t=read();
	while(t--)
	{
		solve();
	}
    return 0;
}
