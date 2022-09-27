#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int a[400005]; 
main()
{
	int n,now=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		now^=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==now)
		{
			puts("Win");
			return 0;
		}
	}
	if(n%2==0)puts("Lose");
	else puts("Win");
}


