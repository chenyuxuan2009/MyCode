#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	bool f=1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]!=1&&(i>0&&i<n-1))f=0;
	}
	bool flag=0;
	if(f==1||(n==3&&a[1]%2==1))flag=1;
	unsigned long long ans=0;
	for(int i=1;i<n-1;i++)ans+=(a[i]+1)/2;
	if(flag)cout<<-1<<endl;
	else cout<<ans<<endl;
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
