#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k;
	cin>>n>>k;
	if((1+k)*2%4!=0&&(2+k)*1%4!=0)
	{
		puts("NO");
		return;
	}
	puts("YES");
	for(int i=1;i<=n;i+=2)
	{
		if((i+k)*(i+1)%4==0)
		{
			cout<<i<<" "<<i+1<<"\n";
		}
		else if((i+k+1)*i%4==0)
		{
			cout<<i+1<<" "<<i<<"\n";
		}
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

