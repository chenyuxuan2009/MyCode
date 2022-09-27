#include<bits/stdc++.h>
using namespace std;
long int n,x,y;
vector<int> a[1000200];
void dfs(int x, int y)
{
	cout<<x<<" ";
	sort(a[x].begin(),a[x].end());
	for(int i:a[x])
	{
		if(i!=y)
		{	
			dfs(i,x);
			cout<<x<<' ';
		}
	}
}
int main()
{
	cin>>n;
	for(long int i=1;i<n;i++) 
	{
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	dfs(1,0); 
	return 0;
}
