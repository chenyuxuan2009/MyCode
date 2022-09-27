#include<bits/stdc++.h>
using namespace std;
int a[1000000]; 
int main()
{
	int s=0,n,maxx=INT_MIN;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxx=max(a[i],maxx);
	}
	for(int i=1;i<=n;i++)
	{
		s=s+maxx-a[i];
	}
	cout<<s;
	return 0;
}


