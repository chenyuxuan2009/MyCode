#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],sum;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		sum+=abs(a[n/2+1]-a[i]);
	}
	cout<<sum<<endl;
	return 0;
}