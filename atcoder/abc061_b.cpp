#include<bits/stdc++.h>
using namespace std;
int n,k,a[55],x,y;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>x>>y;
		a[x]++;
		a[y]++;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

