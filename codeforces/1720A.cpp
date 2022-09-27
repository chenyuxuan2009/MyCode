#include<bits/stdc++.h>
#define lcm(x,y) (x==0||y==0?0:x/__gcd(x,y)*y)
using namespace std;
void solve()
{
	long long a,b,c,d,aa,bb,cc,dd;
	cin>>a>>b>>c>>d;
	a*=d;
	b*=c;
	if(a==b)puts("0");
	else 
	{
		if(a==0||c==0)
		{
			puts("1");
			return;
		}
		aa=__gcd(a,b);
		a/=aa;
		b/=aa;
		if(a==1||b==1)puts("1");
		else puts("2");
	}
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}

