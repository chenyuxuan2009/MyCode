#include<bits/stdc++.h>
using namespace std;
int x[105],y[105];
int main()
{
	int n,ans=INT_MIN;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i!=j)
			{
				ans=max(ans,(abs(x[i]-x[j])*abs(x[i]-x[j])+abs(y[i]-y[j])*abs(y[i]-y[j])));
			}
			
		}
	}
	cout<<fixed<<setprecision(10)<<sqrt(ans)<<endl;
	return 0;
}
