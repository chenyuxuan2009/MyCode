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
		int n,last=-1,f=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(last>=x)f++;
			last=x;
		}
		puts((f||n%2==0)?"YES":"No"); 
	}
}

