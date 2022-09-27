#include<bits/stdc++.h>
using namespace std;
int s[114514];
int S(int l,int r)
{
	return s[r]-s[l-1];
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int a;
		cin>>a;
		s[i]=s[i-1]+a;
	}
	int ans=-1919810;
	for(int i=1;i<=n-m+1;i++)
	{
		ans=max(ans,s[i-1+m]-s[i]-S(i-1,i-1+m));
	}
	cout<<s[4]<<" "<<s[3]<<" "<<s[4]-s[2]<<endl;
	cout<<ans<<endl;
	return 0;
}

