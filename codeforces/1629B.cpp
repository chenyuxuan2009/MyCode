#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int l,r,x;
	cin>>l>>r>>x;
	int cnt=(r-l)/2;
	cnt+=(l%2==1||r%2==1);
	if(l==r&&l>1)puts("YES");
	else if(cnt>x)puts("NO");
	else puts("YES");
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
