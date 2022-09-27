#include <bits/stdc++.h>
const int MAX = 10000+10;
using namespace std;
char a[MAX][MAX];int x[MAX],y[MAX];
int main()
{
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];if(a[i][j]=='*') x[i]++,y[j]++;
		}
	}
	long long ans=0;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	if(a[i][j]=='*')
	{
		ans+=(long long)(x[i]-1)*(y[j]-1);
	}cout<<ans<<endl; 
 }
