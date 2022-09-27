#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,minn=INT_MAX,id;
	cin>>n;
	int a[n+1]={};
	int b[n+1]={};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[a[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(b[a[i]]==1)
		{
			if(a[i]<minn)
			{
				minn=a[i];
				id=i;
			}
		}
	}
	cout<<(minn==INT_MAX?-1:id)<<endl;
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