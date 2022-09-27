#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
const int mod1=998244352;
int number(int x,int y)
{
	x%=mod; 
	int re=1;
	for(;y>0;y>>=1)
	{
		if(y&1)re=re*x%mod;
		x=x*x%mod;
	}
	return re;
}
int number1(int x,int y)
{
	x%=mod1; 
	int re=1;
	for(;y>0;y>>=1)
	{
		if(y&1)re=re*x%mod1;
		x=x*x%mod1;
	}
	return re;
}
main()
{
	int n,m,k;
	cin>>n>>k>>m;
	if(m%mod==0)cout<<0<<endl;
	else cout<<number(m,number1(k,n))%mod<<endl;
}
