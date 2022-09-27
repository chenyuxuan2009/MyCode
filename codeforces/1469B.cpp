#include<bits/stdc++.h>
using namespace std;
int a[10000];
int b[10000];
int pre[1000];
int pre1[1000];
int main()
{
	int  T;
	cin>>T;
	while(T--)
	{
		memset(pre,0,sizeof(pre));
		memset(pre1,0,sizeof(pre1));
		int n,m;
		cin>>n;
		for(int i=1;i<=n;i++)		
			cin>>a[i];		
		cin>>m;
		for(int i=1;i<=m;i++)		
			cin>>b[i];		
		int ans=0;
		int maxx=0;
		int maxn=0;
		for(int i=1;i<=n;i++)
		{
			pre[i]=pre[i-1]+a[i];
			maxx=max(pre[i],maxx);
		}
		for(int i=1;i<=m;i++)
		{
			pre1[i]=pre1[i-1]+b[i];
			maxn=max(maxn,pre1[i]);
		}
		cout<<max(0,maxx+maxn)<<endl;
	}
}
