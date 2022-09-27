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
int a[300005],s,n,m;
map<int,int>g;
int main()
{
	scanf("%d%d",&n,&m);	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		g[a[i]]++;
		if(i>=m&&!--g[a[i-m]])
			g.erase(a[i-m]);
		s=max(s,int(g.size()));
	}
	printf("%d",s);
	return 0;
}

