#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int l1,l2,l3;
	cin>>l1>>l2>>l3;
	if((l1==l2&&l3%2==0)||(l2==l3&&l1%2==0)||(l2%2==0&&l1==l3))
	{
		puts("YES");
		return;
	}
	if(l1==l2+l3||l2==l1+l3||l3==l1+l2)
	{
		puts("YES");
		return;
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
