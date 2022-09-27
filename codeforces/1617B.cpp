#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
bool prime(int a)//判断质数或合数
{
	if(a==1)return false;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)return false;
	}
	return true;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2==1)
		{
			for(int i=2;i<n-1;i++)
			{
				if(prime(i)==1)
				{
					if(__gcd(i,n-i-1)==1)
					{
						cout<<i<<" "<<n-i-1<<" "<<1<<endl;
						break;
					}
				}
			}
		}
		else
		{
			cout<<n/2-1<<" "<<n/2<<" "<<1<<endl;
		}
	} 
}	


