#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<climits>
typedef long long ll;
using namespace std;
const int mod=998244353;
const ll N=2e5+5;
string c="0123456789ABCDEF";
int arr[200005];
int read(){int x=0,f=1;char ch=getchar();while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}return x*f;}
void write(int x){if(x<0){putchar('-');x=-x;}if(x>9)write(x/10);putchar(x%10+'0');}
int Joseph(int n,int m){return n==1?n:(Joseph(n-1,m)+m-1)%n+1;}
bool is_prime(int a){if(a==1)return false;for(int i=2;i<=sqrt(a);i++){if(a%i==0)return false;}return true;}
bool is_palindrome(string str){string st=str;reverse(st.begin(),st.end());if(st==str)return true;else return false;}
int qpow(int x,int y){int re=1;for(;y>0;y>>=1){if(y&1)re=re*x%mod;x=x*x%mod;}return re;}
void f(int x,int m){if(x/m)f(x/m,m);cout<<c[x%m];}
int search(int start,int end,int key){int ret=-1;int mid;while(start<=end){mid=start+((end-start)>>1);if(arr[mid]<key)start=mid+1;else if(arr[mid]>key)end=mid-1;else{ret=mid;break;}}return ret;}
struct node
{
	string sss;int cnt=0;
};
bool cmp(node a,node b)
{
	if(a.cnt==b.cnt)return a.sss<b.sss;
	else return a.cnt>b.cnt;
}
string s[N];
node ss[N];
void solve()
{
	int n=read(),sum=1,sz=0,maxx=INT_MIN;
	s[n+1]="";
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	sort(s+1,s+n+1);
	for(int i=2;i<=n+1;i++)
	{
		if(s[i]!=s[i-1])
		{
			sz++;
			ss[sz].sss=s[i-1];
			ss[sz].cnt=sum;
			maxx=max(sum,maxx);
			sum=1;
		}
		else
		{
			sum++;
		}
	}
	sort(ss+1,ss+sz+1,cmp);
	for(int i=1;i<=sz;i++)
	{
		if(ss[i].cnt==maxx)cout<<ss[i].sss<<endl;
	}
}
int main()
{
//	freopen("example.in","r",stdin);
//	freopen("example.out","w",stdout);
//	std::ios::sync_with_stdio(false);
//	cin.tie(nullptr);cout.tie(nullptr);
	int t=1;
	while(t--)
	{
		solve();
	}
    return 0;
}
