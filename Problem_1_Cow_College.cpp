#include<bits/stdc++.h>
using namespace std;
int n;
long long c[100020];
long long ans,money;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
	}
	sort(c+1,c+n+1,greater<int>());
	for(int i=1;i<=n;i++)
	{
		if(c[i]*i>=ans)
		{
			ans=c[i]*i;
			money=c[i];
		}
	}
	cout<<ans<<" "<<money<<endl;
	return 0;
}