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
	int t;
	cin>>t;
	while(t--)
	{
		int n,a;
		bool f=true;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a;
			int k=sqrt(a);
			if(k*k!=a) f=false;
		}
		if(f) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	} 
	return 0;
}

