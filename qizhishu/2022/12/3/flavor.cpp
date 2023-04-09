#include<bits/stdc++.h>
using namespace std;
int a[520];
int minn=INT_MAX,ans,n,l,sum;
int main()
{
	cin>>n>>l;
	for(int i=1;i<=n;i++)
	{
		a[i]=l+i-1;
		sum+=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(abs(a[i])<minn)
		{
			minn=abs(a[i]);
			ans=sum-a[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}