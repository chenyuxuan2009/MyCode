#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,t,cnt=0,sum=0;
	cin>>n>>s>>t;
	while(n--)
	{
		int x;
		cin>>x;
		sum+=x;
		cnt+=(sum>=s&&sum<=t);
	}
	cout<<cnt<<endl;
    return 0;
}
