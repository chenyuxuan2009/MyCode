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
    	int x,y,n;
        cin>>x>>y>>n;
        cout<<(n-y)/x*x+y<<endl;
    }
	return 0;
}

