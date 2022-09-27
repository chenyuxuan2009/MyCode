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
int a[100005],b[100005],c[100005]; 
int main()
{
	int n,s=0,i=1,j=1,k=1;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		cin>>b[i];
	for(int i=1;i<=n;i++)
		cin>>c[i];
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	sort(c+1,c+n+1);
	while(i<=n&&j<=n&&k<=n)
	{
		if(a[i]<b[j]&&b[j]<c[k])
			s++,i++,j++,k++;
		else if(a[i]>=b[j])j++;
		else if(b[j]>=c[k])k++; 
	}
	cout<<s;
	return 0;
}

