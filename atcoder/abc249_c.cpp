#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<climits>
typedef long long ll;
using namespace std;
const int mod=998244353;
const ll N=1e5+5;
string c="0123456789ABCDEF";
int arr[200005];
int read(){int x=0,f=1;char ch=getchar();while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+(ch^48);ch=getchar();}return x*f;}
void write(int x){if(x<0){putchar('-');x=-x;}if(x>9)write(x/10);putchar(x%10+'0');}
int Joseph(int n,int m){return n==1?n:(Joseph(n-1,m)+m-1)%n+1;}
bool is_prime(int a){if(a==1)return false;for(int i=2;i<=sqrt(a);i++){if(a%i==0)return false;}return true;}
bool is_palindrome(string str){string st=str;reverse(st.begin(),st.end());if(st==str)return true;else return false;}
int qpow(int x,int y){int re=1;for(;y>0;y>>=1){if(y&1)re=re*x%mod;x=x*x%mod;}return re;}
int search(int start,int end,int key){int ret=-1;int mid;while(start<=end){mid=start+((end-start)>>1);if(arr[mid]<key)start=mid+1;else if(arr[mid]>key)end=mid-1;else{ret=mid;break;}}return ret;}
string s[20];
bool f[20];
int a[30];
int ans;
void dfs(int n,int dep,int k)
{
	if(dep==n)
	{
		for(int kk=0;kk<=1;kk++)
		{
			memset(a,0,sizeof(a));
			if(kk==0)f[n]=0;
			else f[n]=1;
			int sum=0;
			for(int i=1;i<=n;i++)
			{
				if(f[i]==1)
				{
					for(int j=0;j<s[i].size();j++)
					{
						a[s[i][j]-'a'+1]++;
					}
				}
			}
			for(int i=1;i<=26;i++)
			{
				if(a[i]==k)
				{
					sum++;
				}
			}
			ans=max(ans,sum);
		}
	}
	else
	{
		f[dep]=1;
		dfs(n,dep+1,k);
		f[dep]=0;
		dfs(n,dep+1,k);
	}
}
void solve()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	dfs(n,1,k);
	cout<<ans<<endl;
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
