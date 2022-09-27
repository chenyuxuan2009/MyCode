#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	int a,b;
	cin>>a>>b;
	if(a%2==b%2)cout<<(a+b)/2;
	else cout<<"IMPOSSIBLE";
}


