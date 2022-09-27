#include<bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
	int n,m,s,minn=INT_MAX;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a[i]; 
	} 
	sort(a,a+m+1);
	for(int i=1;i<=m-n+1;i++)
	{
		s=a[i+n-1]-a[i];
		minn=min(minn,s);
	}
	cout<<minn;
	return 0;
}


