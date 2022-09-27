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
		if(max(a,b)>=min(a,b)*3)
		{
			cout<<min(a,b)<<endl;
		}
		else
		{
			int k=(max(a,b)-min(a,b))/2;
			a-=k;
			b-=k;
			cout<<k+min(a/2,b/2)<<endl;
		}
	} 
}


