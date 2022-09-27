#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,ans=1;
		bool f=0;
		cin>>n;
		int day[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>day[i];
			if(i>1&&f==0)
			{
				if(day[i]==0&&day[i-1]==0)
				{
					ans=-1;
					f=1;
				}
				if(day[i]==1)
				{
					if(day[i-1]==0)
					{
						ans++;
					}
					else
					{
						ans+=5;
					}
				}
			}
			if(i==1)
			{
				if(day[1]==1)
				{
					ans=2;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
