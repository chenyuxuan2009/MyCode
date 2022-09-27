#include<bits/stdc++.h>
using namespace std;
#define ret return
int n,a[105],d,z,c; 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=2;i<=1000;i++)
	{
		c=0;
		for(int j=1;j<=n;j++)
		{
			if(a[j]%i==0)c++; 
		}
		if(d<c)d=c,z=i;
	}
	cout<<z;
	ret 0;
}



