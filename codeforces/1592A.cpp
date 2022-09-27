#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
/*×Ô¼º*/
int a[1005];
void main_me()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,sum=0,ans=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		sum=a[n-1]+a[n-2]; 
		if(sum>=m)
		{
			if(a[n-1]>=m||a[n-2]>=m)cout<<1<<endl;
			else cout<<2<<endl;
			continue;
		}
		else
		{
			ans+=(m/sum)*2;
			m%=sum;
			if(m!=0)
			{
				if(a[n-1]>=m||a[n-2]>=m)ans++;
				else ans+=2;
			}
			cout<<ans<<endl;
		}
	} 
}
main()
{
	main_me();
}

