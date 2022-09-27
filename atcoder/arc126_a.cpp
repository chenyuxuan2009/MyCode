#include<bits/stdc++.h>
#define int long long
using namespace std;
int t,a,b,c,d,s;
main()
{
	cin>>t;
	while(t--)
	{
		s=0;
		cin>>a>>b>>c;
		d=min(b/2,c);
		b-=2*d;
		c-=d;
		s+=d;
		d=min(c/2,a);
		a-=d;
		c-=2*d;
		s+=d;
		d=min(a/2,b/2);
		b-=2*d;
		a-=d*2;
		s+=d;
		d=min(a/3,c);
		c-=d;
		a-=d*3;
		s+=d;
		d=a/5;
		a-=d*5;
		s+=d;
		cout<<s<<"\n";
	}
}
