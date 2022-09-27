#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
	int n,s1=0,s2=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			s1++;
		}
		else
		{
			s2++;
		}
	}
	if(s1==1)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]%2==0)
			{
				cout<<i;
				return 0;
			}
		}
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]%2==1)
			{
				cout<<i;
				return 0;
			}
		}
	}
	return 0;
}

