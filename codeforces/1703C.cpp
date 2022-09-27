#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int m;
		string s;
		cin>>m>>s;
		for(int j=0;j<m;j++)
		{
			if(s[j]=='U')
			{
				a[i]--;
			}
			else
			{
				a[i]++;
			}
			if(a[i]==10)a[i]=0;
			if(a[i]==-1)a[i]=9;
		}
		cout<<a[i]<<" ";
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