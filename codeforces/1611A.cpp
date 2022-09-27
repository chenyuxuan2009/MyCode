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
		int n;
		cin>>n;
		int a=n,b;
		bool f=1;
		while(a>0)
		{
			if(a/10==0)b=a;
			if(a%10%2==0)f=0;
			a/=10;
			
		}
		if(f==1)
		{
			puts("-1");
		}
		else
		{
			if(n%2==0)
			{
				puts("0");
			}
			else
			{
				if(b%2==0)
				{
					puts("1");
				}
				else
				{
					puts("2");
				}
			}
		}
	} 
}


