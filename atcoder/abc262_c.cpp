#include<bits/stdc++.h>
using namespace std;
int a[500020];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	long long ans=0,cnt=0;
	for(int i=1;i<=n;i++)
	{
		int j=a[i];
		if(a[j]==i&&i!=j)
		{
			ans++;
		}
		if(a[i]==i)
		{
			cnt++;
		}
	}
	cout<<1LL*ans/2+1LL*cnt*(cnt-1)/2<<endl;
	return 0;
}

