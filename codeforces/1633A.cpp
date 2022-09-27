#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	if(n%7==0){cout<<n<<endl;return;}
	for(int i=n-n%10;i<=n-n%10+10;i++)
	{
		if(i%7==0)
		{
			cout<<i<<endl;
			return;
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
