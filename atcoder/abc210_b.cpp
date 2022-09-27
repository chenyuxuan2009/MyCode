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
int main()
{
	string s;
	int n;
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
		{
			if((i+1)%2==0)
			{
				puts("Aoki");
				return 0;
			}
			else
			{
				puts("Takahashi");
				return 0;
			}
		}
	}
	
			
	return 0;
}

