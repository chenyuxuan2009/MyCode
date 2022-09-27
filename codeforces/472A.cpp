#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll pd1(ll a)//判断质数或合数 
{
	if(a==1)return 0;
	for(ll i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)return false;
	}
	return true;
}
int main()
{
	ll n;
	cin>>n;
	for(ll i=2;i<=n;i++)
	{
		if(pd1(i)==false&&pd1(n-i)==false)
		{
			cout<<i<<" "<<n-i;
			return 0;	
		}	
	}
	return 0;
}


