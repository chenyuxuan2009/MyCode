#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void f(ll n)
{
	while(n>1)
	{
		if(n&1)
		{
			cout<<n*3+1<<" ";
			n=n*3+1;
		} 
		else
		{
			cout<<n/2<<" ";
			n/=2;
		}
	}
} 
int main()
{
	ll n;
	cin>>n;
	cout<<n<<" ";
	f(n);
	return 0;
}