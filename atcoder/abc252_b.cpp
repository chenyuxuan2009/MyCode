#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,maxx=-1;
	bool f=0;
	cin>>n>>k;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}	
	for(int i=1;i<=k;i++)
	{
		int x;
		cin>>x;
		if(a[x]==maxx)f=1;
	}
	puts(f?"Yes":"No");
	return 0;
}