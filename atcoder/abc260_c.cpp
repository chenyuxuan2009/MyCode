#include<bits/stdc++.h>
using namespace std;
long long red[20];
long long blue[20];
int n,x,y;
bool check()
{
	for(int i=2;i<=10;i++)
	{
		if(blue[i]||red[i])return 0;
	}
	return 1;
}
int main()
{
	cin>>n>>x>>y;
	red[n]++;
	while(!check())
	{
		for(int i=n;i>=2;i--)
		{
			long long z=red[i];
			red[i]-=z;
			red[i-1]+=z;
			blue[i]+=z*x;
		}
		// for(int i=1;i<=n;i++)
		// {
		// 	printf("red%d:%d blue%d:%d\n",i,red[i],i,blue[i]);
		// }
		for(int i=n;i>=2;i--)
		{
			long long z=blue[i];
			blue[i]-=z;
			blue[i-1]+=z*y;
			red[i-1]+=z;
		}
		// for(int i=1;i<=n;i++)
		// {
		// 	printf("red%d:%d blue%d:%d\n",i,red[i],i,blue[i]);
		// }
	}
	cout<<blue[1]<<endl;
	return 0;
}