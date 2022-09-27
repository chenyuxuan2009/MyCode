#include<bits/stdc++.h>
using namespace std;
int a[35],h[35];
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>h[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i!=j&&a[i]==h[j])
			{
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}


