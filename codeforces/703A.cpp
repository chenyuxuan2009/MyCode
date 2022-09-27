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
int n,a[101],b[101],s1=0,s2=0;
int main()
{
	scanf("%d",&n);
	for1(i,1,n,1)
	{
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]<b[i])s2++;
		if(a[i]>b[i])s1++;
	}
	if(s1>s2)puts("Mishka");
	else if(s2>s1)puts("Chris");
	else puts("Friendship is magic!^^");
	return 0;
}

