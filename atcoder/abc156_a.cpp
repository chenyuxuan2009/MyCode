#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	int a,b;
	cin>>a>>b;
	cout<<(a>=10?b:b+(10-a)*100);
}

