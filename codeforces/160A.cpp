#include<bits/stdc++.h>
using namespace std;
int yb[105];
int main()
{
	int s=0,n,g=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>yb[i];
		s+=yb[i];
	}
	sort(yb+1,yb+n+1,greater<int>());
	for(int i=1;i<=n;i++)
	{
		g+=yb[i];
		if(g>s-g)
		{
			cout<<i;
			return 0;
		}
	}
	return 0;
}


