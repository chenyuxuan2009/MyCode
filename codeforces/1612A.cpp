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
		int x,y;
		cin>>x>>y;
		if((x+y)%2==1)
		{
			puts("-1 -1");	
		}	
		else
		{
			if(min(x,y)==x)
			{
				cout<<min(x,y)<<" "<<(x+y)/2-min(x,y)<<endl;
			}
			else
			{
				cout<<(x+y)/2-min(x,y)<<" "<<min(x,y)<<endl;
			}
			
		}
	} 
}


