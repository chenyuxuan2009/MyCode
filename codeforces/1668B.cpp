#include<bits/stdc++.h>
using namespace std;
int n,m,t;
int a[100010];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)cin>>a[i];
		sort(a+1,a+n+1);
		long long s=a[n]+n;
		for(int i=2;i<=n;i++)s+=a[i];
		cout<<(s>m?"NO":"YES")<<"\n";
	}
	return 0;
}