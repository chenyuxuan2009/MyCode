#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,ans=0,cnt=0,fic=0;
	cin>>n;
	int a[n+1],b[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>a[i-1]&&a[i]>a[i+1])fic++;
	}
	if(n&1)
	{
		cnt++;
		for(int i=2;i<=n-1;i+=2)
		{
			if(a[i]<=a[i-1])ans+=a[i-1]-a[i]+1,a[i]=a[i-1]+1;
			if(a[i]<=a[i+1])ans+=a[i+1]-a[i]+1,a[i]=a[i+1]+1;
		}
		for(int i=2;i<=n-1;i++)
		{
			if(a[i]>a[i-1]&&a[i]>a[i+1])cnt++;
		}
		if(fic>cnt)cout<<0<<endl;
		else cout<<ans<<endl;
	}
	else
	{
		int cur,curc;
		for(int i=2;i<=n-2;i+=2)
		{
			if(a[i]<=a[i-1])ans+=a[i-1]-a[i]+1,a[i]=a[i-1]+1;
			if(a[i]<=a[i+1])ans+=a[i+1]-a[i]+1,a[i]=a[i+1]+1;
		}
		for(int i=2;i<=n-1;i++)
		{
			if(a[i]>a[i-1]&&a[i]>a[i+1])cnt++;
		}
		cur=ans;
		ans=0;
		curc=cnt;
		cnt=0;
		for(int i=3;i<=n-1;i+=2)
		{
			if(b[i]<=b[i-1])ans+=b[i-1]-b[i]+1,b[i]=b[i-1]+1;
			if(b[i]<=b[i+1])ans+=b[i+1]-b[i]+1,b[i]=b[i+1]+1;
		}
		for(int i=2;i<=n-1;i++)
		{
			if(b[i]>b[i-1]&&b[i]>b[i+1])cnt++;
		}
		// cout<<cnt<<" "<<ans<<endl;
		// cout<<curc<<" "<<cur<<endl;
		if(fic>=cnt&&fic>=curc)cout<<0<<endl;
		else if(curc>cnt)cout<<cur<<endl;
		else if(curc<cnt)cout<<ans<<endl;
		else cout<<min(ans,cur)<<endl;
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