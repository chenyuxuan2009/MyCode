#include<bits/stdc++.h>
using namespace std;
int a[200005],b[200005];
int main()
{
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		a[i]=b[i]=i;
	}
	while(q--)
	{
		int x;
		cin>>x;
		if(a[x]==n)swap(b[a[x]-1],b[a[x]]),swap(a[b[a[x]-1]],a[b[a[x]]]);
		else swap(b[a[x]+1],b[a[x]]),swap(a[b[a[x]+1]],a[b[a[x]]]);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}