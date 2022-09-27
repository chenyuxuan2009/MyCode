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
string s[4],str[]{"H","2B","3B","HR"};
int f[4];
int main()
{
	for(int i=0;i<4;i++)
	{
		cin>>s[i];
		for(int j=0;j<4;j++)		
			if(s[i]==str[j]&&!f[j])			
				f[j]++;		
	}
	for(int i=0;i<4;i++)
	{
		if(f[i]!=1)
		{
			puts("No");
			return 0;
		} 
	} 
	puts("Yes");
	return 0;
}

