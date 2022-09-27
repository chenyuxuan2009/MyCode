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
		int a,b,c;
		cin>>a>>b>>c;
//		int z=min(a,min(b,c));
//		a-=z;
//		b-=z;
//		c-=z;
//		a%=2;
//		b%=2;
//		c%=2;
//		if(a==1&&b==1&&c==1)puts("0");
//		if(a==1&&b==1&&c==0)puts("1");
//		if(a==1&&b==0&&c==1)puts("2");
//		if(a==1&&b==0&&c==0)puts("1");
//		if(a==0&&b==1&&c==1)puts("1");
//		if(a==0&&b==1&&c==0)puts("2");
//		if(a==0&&b==0&&c==1)puts("3");
//		if(a==0&&b==0&&c==0)puts("0");
		if((a+b*2+c*3)%2==0)cout<<0<<endl;
		else cout<<1<<endl;
	} 
}

