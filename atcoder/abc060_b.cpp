#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(c%__gcd(a,b)==0)puts("YES");
	else puts("NO");
}


