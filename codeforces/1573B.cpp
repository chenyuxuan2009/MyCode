#include<bits/stdc++.h>
using namespace std;
int n,t,a[300001],i,j;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		cin>>j,a[j]=i;
		for(i=0;i<n;i++)
		cin>>j,a[j]=i;
		n*=2,i=j=n;
		while(n)j=min(a[n],j),i=min(a[n-1]+j,i),n-=2;
		cout<<i<<'\n';
	}
}

