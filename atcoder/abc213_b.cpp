#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 10000005
int a[N],b[N],n;
signed main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b+1,b+n+1,greater<int>());
	for(int i=1;i<=n;i++)
		if(a[i]==b[2]){cout<<i;break;}
			
}

