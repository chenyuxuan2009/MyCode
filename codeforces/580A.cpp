#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int maxx=INT_MIN,n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i+1]>=a[i])
		{
			s++;
		}
		else
		{
			maxx=max(maxx,s);
			s=0;
		}
	}
	cout<<maxx+1;
	return 0;
}


