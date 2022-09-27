#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
struct node
{
	int x,y; 
};
bool cmp(node a,node b)
{
	if(a.x>b.x)return 1;
	if(a.x<b.x)return 0;
	if(a.x==b.x)
	{
		return a.y>b.y;
	}
}
node a[300005];
main()
{
	int n,w,ans=0;
	cin>>n>>w;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].x>>a[i].y; 
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
	{
		if(w<a[i].y)
		{
			ans+=w*a[i].x;
			break;
		}
		else
		{
			w-=a[i].y;
			ans+=a[i].y*a[i].x;
		}
			
	}
	cout<<ans<<endl;
}


