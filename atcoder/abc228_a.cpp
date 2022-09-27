#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	int a,b,c;
	cin>>a>>b>>c;
	a=(a>b?a-24:a);
	c=(c>b?c-24:c);
	cout<<(c>=a&&c<b?"Yes":"No");
}


