#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 100005
int n,a[N],t,x,s; 
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
	sort(a+1,a+n+1);
	scanf("%lld",&t);
	while(t--)
	{
		s=0;
		scanf("%lld",&x);
		s=upper_bound(a+1,a+n+1,x)-a-1;
		printf("%lld\n",s);
	}
}



