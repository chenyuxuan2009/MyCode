#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
	int m,s,i,k,j;
	cin>>m>>s;
	if(s>m*9||s<1&&m>1){
		cout<<"-1 -1";
		return 0;
	}
	for(i=m-1,k=s;i>=0;i--){
		j=max(0,k-9*i);
		if(j==0&&i==m-1&&k)
		j=1;
		cout<<j;
		k-=j;
	}
	cout<<" ";
	for(i=m-1,k=s;i>=0;i--){
		j=min(9,k);
		cout<<j;
		k-=j;
	}
	return 0;
}

