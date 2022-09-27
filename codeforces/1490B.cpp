#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
	int n,s0=0,s1=0,s2=0,ans=0;
	cin>>n;
	int a[n+1],k=n/3;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s0+=(a[i]%3==0);
		s1+=(a[i]%3==1);
		s2+=(a[i]%3==2);
	}
	// int maxx=max({s0,s1,s2});
	// cout<<s0<<" "<<s1<<" "<<s2<<" "<<maxx<<endl;
	
	
	if(s1>=k)
	{
		ans=(k-s0)*2+(k-s2);
	}
	if(s0>=k)
	{
		ans=(k-s2)*2+(k-s1);
	}
	if(s2>=k)
	{
		ans=(k-s1)*2+(k-s0);
	}

	if(s1>=k&&s2>=k)
	{
		ans=s2-k+(s1-k)*2;
	}
	if(s0>=k&&s2>=k)
	{
		ans=s0-k+(s2-k)*2;
	}
	if(s0>=k&&s1>=k)
	{
		ans=s1-k+(s0-k)*2;
	}
	
	if(s0>=k&&s1>=k&&s2>=k)
	{
		ans=0;
	}
	cout<<ans<<endl;
}
/*
*/
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