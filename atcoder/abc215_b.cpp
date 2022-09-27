#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 10000005
int n,i,x=1;
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n;
	while(x*2<=n) 
	{
		i++;
		x*=2;
	}
	cout<<i;
}
