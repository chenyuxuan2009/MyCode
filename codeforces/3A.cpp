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
	int a,y;
	char c,x;
	cin>>c>>a>>x>>y;
	int t=abs(c-x),k=abs(a-y),n=min(t,k),m=n+abs(t-k);
	cout<<m<<endl;
	for1(i,1,n,1)
	{
		if(c<x)putchar('R'),c++;
		else putchar('L'),x++;
		if(a<y)puts("U"),a++;
		else puts("D"),y++;
	}
	for1(i,n,m-1,1)
	{
		if(a<y)puts("U");
		else if(a>y)puts("D");
		else if(c<x)puts("R");
		else puts("L");
	}
	return 0;
}
