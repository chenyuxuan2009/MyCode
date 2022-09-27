#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		if(n==1&&m==1)
		{
			puts("0");	
		}
		else if(n==1||m==1)
		{
			
			puts("1");
		}
		else 
		{
			puts("2");
		}
	}
}


