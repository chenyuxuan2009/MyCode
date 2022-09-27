#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
#define ll long long
#define for1(i,n,a,b) for(ll (i)=(n);(i)<=(a);(i)+=(b))
#define for2(i,n,a,b) for(ll (i)=(n);(i)>=(a);(i)-=(b))
ll a[50000];
int main()
{
	ll s1=0,s2=0,s3=0,n;
	cin>>n;
	for1(i,1,n,1)
	{
		cin>>a[i];
		if(a[i]==1)s1++;
		else if(a[i]==2)s2++;
		else s3++;
	}
	n=min(s1,min(s2,s3));
	cout<<n<<endl;
	for1(i,1,n,1)
	{
		for1(j,1,s1+s2+s3,1)
		{
			if(a[j]==1)
			{
				cout<<j<<" ";
				a[j]=0;
				break;
			}
		}
		for1(j,1,s1+s2+s3,1)
		{
			if(a[j]==2)
			{
				
				cout<<j<<" ";
				a[j]=0;
				break;
			}
		}
		for1(j,1,s1+s2+s3,1)
		{
			if(a[j]==3)
			{
				cout<<j<<" ";
				a[j]=0;
				break;
			}
		}
		cout<<endl; 
	}
	return 0;
}

