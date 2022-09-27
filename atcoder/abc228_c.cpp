#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int p[1000005][10];
int a[1000005];
main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>p[i][1]>>p[i][2]>>p[i][3];
		p[i][4]=p[i][1]+p[i][2]+p[i][3];
		a[i]=p[i][4];	
	}
	sort(a+1,a+n+1,greater<int>());
	for(int i=1;i<=n;i++)
	{
		if(p[i][4]+300>=a[k])
		{
			puts("Yes");
			
		}
		else
		{
			puts("No");
		}
	}
}	


