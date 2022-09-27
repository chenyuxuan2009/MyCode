#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int a[100000];
main()
{
	int n,ans=0;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		int x,y;
		cin>>x>>y;
		a[x]++;
		a[y]++;
	}
	for(int i=0;i<n;i++)
	{
		ans+=(a[i+1]==n-1);
	}
	cout<<(ans==1?"Yes":"No");
}

