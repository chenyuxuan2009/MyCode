#include<bits/stdc++.h>
using namespace std;
int n;
int a[200020];
int z[200020];
main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=2;i<=n;i++)
	{
		if(a[i-1]>a[i])
		{
			z[i-1]^=1;
			z[i]^=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<z[i]<<" ";
	}
}
