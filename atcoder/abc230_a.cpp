#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	int a;
	cin>>a;
	if(a<=9)
	{
		cout<<"AGC00"<<a; 
	}
	else
	{
		if(a>=42)
		{
			cout<<"AGC0"<<a+1; 
		}
		else
		{
			cout<<"AGC0"<<a;  
		}
	}
}


