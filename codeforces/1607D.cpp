#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
pair<char,int>p[200005];
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 
		int n,f=0; 
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>p[i].second;
		}
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first;
		}
		sort(p,p+n);
		for(int i=0;i<n;i++)
		{
			if(p[i].first=='B')
			{
				if(p[i].second<i+1)
				{
					f=1;
					break;
				}
			}
			else
			{
				if(p[i].second>i+1)
				{
					f=1;
					break;
				}
			}
		}
		puts(f==1?"NO":"YES");
	} 
}


