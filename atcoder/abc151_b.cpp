#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
	int n,k,m,sum=0;
	cin>>n>>k>>m;
	for(int i=1;i<=n-1;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(sum+k>=m*n)
	{
		cout<<max(m*n-sum,0)<<endl;
	}
	else
	{
		puts("-1");
	}
	return 0;
}