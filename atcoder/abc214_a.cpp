#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 10000005
int n;
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n;
	if(n>=1&&n<=125)puts("4");
	else if(n>=126&&n<=211)puts("6");
	else puts("8");
}



