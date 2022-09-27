#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#define ll long long
using namespace std;
const int mod=998244353;
const int N=1e5+5;
inline int read()
{
    int x=0,f=1;
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
void solve()
{
	ll n,s;
	cin>>n>>s;
	cout<<s/(n*n)<<endl;
}
int main()
{
	//freopen("example.in","r",stdin);
	//freopen("example.out","w",stdout);
//	std::ios::sync_with_stdio(false);
//	cin.tie(nullptr);cout.tie(nullptr);
	int t=read();
	while(t--)
	{
		solve();
	}
    return 0;
}
