#include<bits/stdc++.h>
using namespace std;
int TestCase;
double f[220][220];
int x[220];
int y[220];
double dis(int X1,int Y1,int X2,int Y2)
{
	return 1.0*sqrt(1.0*(X1-X2)*1.0*(X1-X2)+1.0*(Y1-Y2)*1.0*(Y1-Y2));
}
void solve()
{
	memset(f,0,sizeof(f));
	int n;
	cin>>n;
	if(n==0)exit(0);
	printf("Scenario #%d\n",TestCase);
	for(int i=1;i<=n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			f[i][j]=dis(x[i],y[i],x[j],y[j]);
		}
	}	
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				double a=f[i][k];
				double b=f[k][j];
				if(a<f[i][j]&&b<f[i][j])
				{
					f[i][j]=max(f[i][k],f[k][j]); 
				}
			}
		}	
	} 
	double ans=f[1][2];
	printf("Frog Distance = %.3lf\n\n",ans);
} 
int main()
{
	TestCase++;
	solve();	
	main();	
	return 0;
}

