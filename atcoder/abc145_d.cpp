#include<bits/stdc++.h>
using namespace std;
long long x,y,a,b,z=1;
const int p=1000000007;
long long pw(long long x,long long y,long long mod)
{
	long long ans=1;
	for(;y>0;y/=2)
	{
		if(y%2==1)ans=ans*x%mod;
		x=x*x%mod;
	}
	return ans; 
}
int main()
{
	cin>>x>>y;
	a=(2*x-y)/3;
	b=(2*y-x)/3;
	if((x+y)%3!=0||a<0||b<0)
	{
		cout<<0;
		return 0;
	}
	for(int i=0;i<b;i++)
		z=(long long)z*(a+b-i)%p*pw(i+1,p-2,p)%p;
	cout<<z<<endl;
	return 0;
}
