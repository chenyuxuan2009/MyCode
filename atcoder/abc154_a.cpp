#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	string s,t,u;
	int a,b;
	cin>>s>>t>>a>>b>>u;
	a-=(s==u);
	b-=(t==u);
	cout<<a<<" "<<b;
}

