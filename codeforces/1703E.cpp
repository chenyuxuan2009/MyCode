#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	char a[n+1][n+1],f90[n+1][n+1],f180[n+1][n+1],f270[n+1][n+1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int _=1;_<4;_++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(_==1)f90[i][j]=a[j][i];
				if(_==2)f180[i][j]=a[n-i+1][n-j+1];
				if(_==3)f270[i][j]=a[n-j+1][n-i+1];
			}
		}
	}
	// for(int _=1;_<4;_++)
	// {
	// 	cout<<endl;
	// 	for(int i=1;i<=n;i++)
	// 	{
	// 		for(int j=1;j<=n;j++)
	// 		{
	// 			cout<<a[i][j][_];
	// 		}
	// 		cout<<endl;
	// 	}
	// }
	// int ans=10005;
	// for(int _=1;_<4;_++)
	// {
	// 	int sum=0;
	// 	for(int i=1;i<=n;i++)
	// 	{
	// 		for(int j=1;j<=n;j++)
	// 		{
	// 			a[i][j][5]=max(a[i][j][5],a[i][j][_]);
	// 		}
	// 		// cout<<endl;
	// 	}
	// 	cout<<endl;
	// 	ans=min(ans,sum);
	// }	
	// cout<<ans<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
/*

*/