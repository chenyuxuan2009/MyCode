#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,ans=0;
	cin>>n;
	int a[105];
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		a[abs(x)]++;
	}
	for(int i=0;i<105;i++)
	{
		if(i==0&&a[i]!=0)ans+=1;
		else if(a[i]>=2)ans+=2;
		else if(a[i]==1)ans+=1;
	}
	cout<<ans<<endl;
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
