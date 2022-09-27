#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a==1&&b==2)cout<<0;
	if(a==1&&b==0)cout<<2;
	if(a==2&&b==1)cout<<0;
	if(a==2&&b==0)cout<<1;
	if(a==0&&b==1)cout<<2;
	if(a==0&&b==2)cout<<1;
	if(a==b)cout<<a;
	return 0;
}

