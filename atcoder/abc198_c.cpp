#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long r,x,y;
	cin>>r>>x>>y;
	if(x*x+y*y<r*r)cout<<2;
	else cout<<ceil(sqrt(x*x+y*y)/r);
}
