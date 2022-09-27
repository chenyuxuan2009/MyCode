#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int t,n;
pair<int,int>a[1020]; 
main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i].first>>a[i].second;
		}
		sort(a,a+n+1);
		for(int i=1;i<=n;i++)
		{
			if(a[i].second<a[i-1].second)
			{
				puts("NO");
				goto gt;
			}
		}
		puts("YES");
		for(int i=1;i<=n;i++)
		{
			for(int j=a[i-1].first;j<a[i].first;j++)
			{
				cout<<"R";
			}
			for(int j=a[i-1].second;j<a[i].second;j++)
			{
				cout<<"U";
			}
			
		}
		cout<<endl;
		gt:;
	}
}


