#include<bits/stdc++.h>
using namespace std;
int a[100020];
int f[100020]; 
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	f[2]=abs(a[1]-a[2]);
	for(int i=3;i<=n;i++)
	{
		f[i]=min(f[i-1]+abs(a[i]-a[i-1]),f[i-2]+abs(a[i]-a[i-2]));
	}
	cout<<f[n]<<endl;
	return 0;
}
