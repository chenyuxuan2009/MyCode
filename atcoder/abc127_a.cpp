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
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<6)puts("0");
	else if(a>=6&&a<=12)printf("%d\n",(b/2));
	else printf("%d\n",b);
	return 0;
}

