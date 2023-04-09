#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll a1[500005];
ll a2[500005];
int main()
{
	ll n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	if(sum%2==0)
	{
		ll sum1=n,sum2=n-1,x=0,y=0;
		cout<<"YES\n";
		a1[++x]=n;
		a2[++y]=n-1;
		for(int i=n-2;i>=1;i--)
		{
			if(sum1>sum2)
			{
				sum2+=i;
				a2[++y]=i;
			}
			else
			{
				sum1+=i;
				a1[++x]=i;
			}
		}
		cout<<x<<endl;
		for(int i=1;i<=x;i++)
		{
			cout<<a1[i]<<" ";
		} 
		cout<<endl<<y<<endl;
		for(int i=1;i<=y;i++)
		{
			cout<<a2[i]<<" ";
		} 
	}
	else
	{
		cout<<"NO\n"; 
	}
	return 0;
}