#include<bits/stdc++.h>
#define int long long
using namespace std;
int number(int x,int y,int mod)
{
	int re=1;
	for(;y>0;y>>=1)
	{
		if(y&1)re=re*x%mod;
		x=x*x%mod;
	}
	return re;
}
main()
{
	int n,m,k;
	cin>>m>>k>>n;
	if(m%10==0)
	{
        puts("0");
    } 
	else if(m%2==0) 
	{
        cout<<(number(m,number(k,n,4),5)%2==0?number(m,number(k,n,4),5):number(m,number(k,n,4),5)+5)<<"\n";
    } 
	else if(m%5==0) 
	{
        puts("5");
    } 
	else 
	{
        cout<<number(m,number(k,n,4),10)<<"\n";
    }
}
