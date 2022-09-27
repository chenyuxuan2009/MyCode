#include<bits/stdc++.h>
using namespace std;
int t,r,b,k;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>r>>b>>k;
		int g=__gcd(r,b);
		r/=g;
		b/=g;
		if(r>b)
		{
			swap(r,b);
		}
		if((long long)(k-1)*r+1<b)
		{
			cout<<"REBEL"<<endl;
		}
		else
		{
			cout<<"OBEY"<<endl;
		}
	}
}
