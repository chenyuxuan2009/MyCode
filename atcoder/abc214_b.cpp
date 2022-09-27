#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 10000005
int s,t,ans;
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>s>>t;
	for(int i=0;i<=s;i++)
		for(int j=0;j+i<=s;j++)
			for(int k=0;k+j+i<=s;k++)
				if(i*j*k<=t)
					ans++;
	cout<<ans;
}



