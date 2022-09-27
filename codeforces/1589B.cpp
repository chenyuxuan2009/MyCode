#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(a%3==0||b%3==0)cout<<a*b/3<<endl;
		if(a%3==2&&b%3==2)cout<<(a*b-4)/3+2<<endl;
		if(a%3==2&&b%3==1||a%3==1&&b%3==2)cout<<(a*b)/3+1<<endl;
		if(a%3==1&&b%3==1)cout<<1+(a*b)/3<<endl;
	}
}


