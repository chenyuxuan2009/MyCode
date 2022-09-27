#include<bits/stdc++.h>
using namespace std;
int a[11415],sz=0;
int main()
{
	int n,m,c;
	cin>>n>>m>>c;
	while(m--)
	{
		int x,ans=1;
		cin>>x;
		if(x<=c/2)
		{
			for(int i=1;i<=n;i++)
			{
				if(a[i]==0||a[i]>x)
				{
					ans=i;
					a[i]=x;
					break;
				}
			}
		}
		else
		{
			for(int i=n;i>=1;i--)
			{
				if(a[i]==0||a[i]<x)
				{
					ans=i;
					a[i]=x;
					break;
				}
			}
		}
		cout<<ans<<endl;
		fflush(stdout);
	}
	return 0;
}