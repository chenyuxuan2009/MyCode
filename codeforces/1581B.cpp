#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int t;
main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdin);
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		if((m>=n-1&&m<=n*(n-1)/2)&&((n==1&&k>1)||(m==n*(n-1)/2&&k>2)||k>3))puts("YES");
		else puts("NO");
	}
}


