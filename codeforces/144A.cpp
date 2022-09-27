#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
	int n,maxx=INT_MIN,minn=INT_MAX,s=0,x,y;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(minn>=a[i])
		{
			minn=a[i];
			y=i;
		}
		if(maxx<a[i])
		{
			maxx=a[i];
			x=i;
		}
	}
	if(x>y)
	{
		cout<<x+n-y-2;
	}	
 	else
 	{
 		cout<<x+n-y-1;
	}	
	return 0;
}


