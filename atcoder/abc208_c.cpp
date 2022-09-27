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
	long long n,k;
 	cin>>n>>k;
 	vector<long long>a(n),b(n);
	for (int i = 0; i < n; i++) 
	{
		cin>>a[i];
		b[i]=a[i];
 	}
 	sort(b.begin(),b.end());
 	long long res=k/n;
 	k %= n;
 	for (int i = 0; i < n; i++) 
	{
 		if (a[i]<b[k]) cout<<res+1<<"\n";
		else cout<<res<<"\n";
		
	}
	return 0;
}

