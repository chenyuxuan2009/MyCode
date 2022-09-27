#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	puts(is_sorted(a,a+n)?"NO":"YES");
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
