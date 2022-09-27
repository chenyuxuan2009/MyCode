#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int a[105],sum,n,f;
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
		sum=0,f=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			if(a[i]&1)f=i;
		}
		if(!check(sum))
		{
			cout<<n<<endl;
			for(int i=1;i<=n;i++)
			{
				cout<<i<<" "; 
			}
			cout<<endl;
			continue;
		}
		else
		{
			cout<<n-1<<endl;
			for(int i=1;i<=n;i++)
			{
				if(f!=i)
				{
					cout<<i<<" ";
				 } 
			}
			cout<<endl;
		}
	} 
}

