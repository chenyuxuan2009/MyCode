#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,s,a[233333];
main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i],s+=a[i];
	sort(a+1,a+1+n);
	while(1)
	{
		if(a[n]*k<=s)cout<<s/k<<"\n",exit(0);
		s-=a[n--],k--;
	}
}
