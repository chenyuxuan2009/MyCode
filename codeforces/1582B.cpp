#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0,s0=0,s1=0,cnt=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
//			sum+=x;
			s0+=(x==0);
			s1+=(x==1);
//			cnt+=(x>0);
		}
		cout<<(1ll<<s0)*(long long)s1<<'\n';
//		cout<<s0<<" "<<s1<<" "<<cnt;
	}
}

