#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int n,k;
int a[200005],b[200005];
bool isok(int x)
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]>x/b[i])sum+=a[i]-x/b[i];
	}
	return sum<=k;
}
main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdin);
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1,greater<int>());
	int l=-1,r=a[n]*b[1];
	while(l<r-1)
	{
		int mid=(l+r)/2;
		if(isok(mid))r=mid;
		else l=mid;
	}
	cout<<r;
	system("pause");
}
