#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
struct j 
{
	int x,y;
};
bool cmp(j a,j b)
{
	return a.x>b.x;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,l=-1,r=1,ans=0;
		cin>>n;
		j a[n+1];
		int c[n+1];
		int b[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i].x;
			a[i].y=i;
			b[i]=a[i].x;	
		}	
		c[0]=0;
		sort(a+1,a+n+1,cmp);
		for(int i=1;i<=n;i++)
		{
			if(i%2==0)
			{
				c[a[i].y]=l;
				l--;
			}
			else
			{
				c[a[i].y]=r;
				r++;
			}
		}
		for(int i=1;i<=n;i++)
		{
			ans+=abs(c[0]-c[i])*2*b[i];	
		}
		cout<<ans<<endl;
		for(auto i:c)cout<<i<<" ";
		cout<<endl;
	} 
}
