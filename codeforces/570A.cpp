#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
	int n,m,s=0;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int z=-1,t=0;
		for(int j=1;j<=n;j++)
		{
			int g;
			cin>>g;
			if(z<g)
			{
				z=g;
				t=j;
			}
		}
		a[t]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[s]<a[i])
		{
			s=i;
		}
	}
	cout<<s;
	return 0;
}


