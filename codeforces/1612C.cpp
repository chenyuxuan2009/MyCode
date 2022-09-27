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
		int k,x;
		cin>>k>>x;
		int n;
		if(k*(k+1)/2<x)
		{
			x-=k*(k+1)/2;
			n=sqrt(2*x);
			n+=k;
			while(k--)
			{
				x-=k;
				n++;
			}
		}
		else
		{
			n=sqrt(2*x);
			while(n*(n+1)/2<x)
			{
				n++;
			}
		}
		cout<<n<<endl;
	}
}


