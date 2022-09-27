#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	if(n%2==0)
	{
		for(int i=2;i<=n;i+=2)
		{
			cout<<i<<" "<<i-1<<" ";
		}
	}
	else
	{
		cout<<1<<" ";
		n--;
		for(int i=2;i<=n;i+=2)
		{
			cout<<i+1<<" "<<i<<" ";
		}
	}
	cout<<endl;
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

