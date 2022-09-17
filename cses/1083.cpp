#include<bits/stdc++.h>
using namespace std;
int f[200005];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int x;
		cin>>x;
		f[x]=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(f[i]==0)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}