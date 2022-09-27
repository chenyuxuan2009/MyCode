#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b)
{
	if(b==0)return a;
	return gcd(b,a%b);
}
bool check(ll n)
{
	ll tmp=n;
	int s=0;
	while(tmp)
	{
		s+=tmp%10;
		tmp/=10;
	}
	return gcd(n,s)>1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		while(check(n)==false)
		{
			n++;
		}
		cout<<n<<endl;
	}
	return 0;
}


