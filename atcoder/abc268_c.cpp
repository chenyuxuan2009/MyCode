#include<bits/stdc++.h>
using namespace std;
int p[200020];
int a[200020];
int f[200020];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		a[p[i]]=i;
	}
	int ans=0,sum=0;
	for(int i=0;i<n;i++)
	{
		f[((i-1+n)%n-a[i]+n)%n]++;
		// printf("%d %d %d\n",((i-1+n)%n-a[p[i]]+n)%n,(i-a[p[i]]+n)%n,((i+1)%n-a[p[i]]+n)%n);
		f[(i-a[i]+n)%n]++;
		f[((i+1)%n-a[i]+n)%n]++;
	}
	for(int i=0;i<n;i++)
		ans=max(ans,f[i]);
	cout<<ans<<endl;
	return 0;
}