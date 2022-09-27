#include<bits/stdc++.h>
using namespace std;
void solve()
{
	long long hc,dc,hm,dm,k,w,a;
	cin>>hc>>dc>>hm>>dm>>k>>w>>a;
	for(long long i=0;i<=k;i++)
	{
		long long x=i,y=k-i;
		__int128 rnd=ceil(hm*1.0/(dc+x*w));
		if(dm*(rnd-1)<hc+a*y)
		{
			puts("YES");
			return;
		}
	}
	puts("NO");
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
