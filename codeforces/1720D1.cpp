#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int a[n+1],c[n+1],b[n+1],f[n+1];
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=i-1;
		c[i]=a[i]^b[i];
		cout<<c[i]<<" ";
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(!ans||f[ans]<c[i])
		{
			f[++ans]=c[i];
		}
		else
		{
			int mid=lower_bound(f+1,f+ans+1,c[i])-f;
			f[mid]=c[i];
		}
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

