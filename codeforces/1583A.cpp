#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
bool check(int a)//判断质数或合数
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
		int n,sum=0;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(check(sum))
		{
			for(int i=1;i<=n;i++)
			{
				if(check(sum-a[i])==0)
				{
					a[i]=0;
					break;
				}
			}
			cout<<n-1<<endl; 
			for(int i=1;i<=n;i++)
			{
				if(a[i]!=0)
				{
					cout<<i<<" ";
				}
			}
			cout<<endl;
		}
		else
		{
			cout<<n<<endl;
			for(int i=1;i<=n;i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
	}
}


