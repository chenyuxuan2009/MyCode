#include<bits/stdc++.h>
using namespace std;
int n;
long long a[100020];
long long b[100020];
long long c[100020];
long long x;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		b[i]=a[i]*2;
//		cout<<b[i]<<" ";
	}
	for(int i=2;i<=n;i++)
	{
		c[i]=b[i-1]-c[i-1];
	}
	x=(b[n]-c[n])/2;
	for(int i=1;i<=n;i++)
	{
		cout<<x<<" ";
		x=b[i]-x;
	}
	cout<<endl;
	return 0;
}
/*
b[1]+b[2]=6
b[2]+b[3]=16
b[3]+b[4]=14
b[4]+b[5]=10
b[5]+b[1]=10

x
6-x
10+x
4-x
6+x

x=2

5
3 8 7 5 5
*/