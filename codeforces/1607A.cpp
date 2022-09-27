#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
char c[27];
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int ans=0,now=0;
		for(int i=1;i<=26;i++)
		{
			cin>>c[i];
		}
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			for(int j=1;j<=26;j++)
			{
				if(s[i]==c[j])
				{
					if(i==0)
					{
						now=j;
					}
					else
					{
						ans+=abs(now-j);
						now=j;
					}
					
				}
			}
		}
		cout<<ans<<endl;
	}
}

