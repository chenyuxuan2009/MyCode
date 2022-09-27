#include<bits/stdc++.h>
using namespace std;
int n;
pair<int,int>a[2020];
long long f[2020][2020];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].first;
		a[i].second=i;
	}
	sort(a+1,a+1+n);
	for(int i=n;i>0;i--)
	{
		for(int j=i;j<=n;j++)
		{
			int l=j-i+1;
			f[i][j]=max((long long)abs(a[l].second-i)*a[l].first+f[i+1][j],(long long)abs(a[l].second-j)*a[l].first+f[i][j-1]);
		}
	}
	cout<<f[1][n]<<endl;
	return 0;
}

