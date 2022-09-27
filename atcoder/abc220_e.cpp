#include<iostream>
using namespace std;
const int mod=998244353;
long long n,d,a[2000002],s,t,b,i,j;
int main()
{
	a[0]=1;
	for(i=1;i<=2000000;i++)a[i]=a[i-1]*2%mod;
	cin>>n>>d;
	for(i=n;i>=1;i--)
	{
		t=a[n-i]*(max(b,min(d+1,2*i-1-d))%mod*a[d-1]%mod)%mod;
		if(i>d)t=(t+a[n-i]*a[d])%mod;
		s=(s+t)%mod;
	}
	cout<<s;
	return 0;
}
