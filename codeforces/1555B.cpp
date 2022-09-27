#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,x1,x2,y1,y2,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		cin>>x1>>y1>>x2>>y2;
		cin>>a>>b;
		int ans=INT_MAX;
		if(x2-x1<=n-a)ans=max(0,a-max(n-x2,x1));
		if(y2-y1<=m-b)ans=min(ans,max(0,b-max(y1,m-y2)));
		if(ans!=INT_MAX)printf("%.9lf\n",1.0*ans);
		else puts("-1");
	}
	return 0;
}
