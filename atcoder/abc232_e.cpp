#include<bits/stdc++.h>
#define ll long long
#define p 998244353
using namespace std;
long long a,b,c,d;
int main()
{
	ll h,w,k,xx1,xx2,yy1,yy2;
	cin>>h>>w>>k>>xx1>>yy1>>xx2>>yy2;
	a=1;
	for(int i=0;i<k;i++)
	{
		ll a1,b1,c1,d1;
		a1=b*(w-1)+c*(h-1);
		b1=b*(w-2)+a+d*(h-1);
		c1=c*(h-2)+a+d*(w-1);
		d1=d*(h+w-4)+b+c;
		a1%=p;
		b1%=p;
		c1%=p;
		d1%=p;
		a=a1;
		b=b1;
		c=c1;
		d=d1;
	}
	if(xx2==xx1&&yy2==yy1)cout<<a%p;
	else if(xx2==xx1)cout<<b%p;
	else if(yy2==yy1)cout<<c%p;
	else cout<<d%p;
	return 0;
}


