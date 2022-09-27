#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int a[105];
int b[105];
int c[105];
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a)); 
		memset(b,0,sizeof(b)); 
		memset(c,0,sizeof(c)); 
		int n,f=1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		for(int i=0;i<n;i++)c[i]=a[i]-b[i];
		for(int i=0;i<n;i++)
		{
			if(c[i]!=0)
			{
				if(c[i]!=-1)
				{
					puts("NO");
					goto gt;
				}
			}
		}
		puts("YES");
		gt:;
	}
}


