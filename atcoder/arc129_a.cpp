#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int f(int r,int n)
{
	int z=0;
	for(int i=0;i<60;i++)
	{
		if(n>>i&1)
		{
			z+=max(0LL,min(r,1LL<<i+1)-(1LL<<i));
		}
	}
	return z;
}
main()
{
	long long n,l,r;
	cin>>n>>l>>r;
	cout<<f(r+1,n)-f(l,n)<<endl;
}
