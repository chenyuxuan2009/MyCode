#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<bool>a;
ll getans()
{
	ll ret=0;
	for(int i=0;i<a.size();i++)
	{
		ret=ret*2+a[i];
	}
	return ret;
}
void dfs(int dep)
{
	if(dep>a.size())
	{
		cout<<getans()<<endl;
		return;
	}
	if(a[dep])
	{
		a[dep]=0;
		dfs(dep+1);
		a[dep]=1;
	}
	dfs(dep+1);
}
int main()
{
	ll x;
	cin>>x;
	if(x==0)
	{
		puts("0");
		return 0;
	}
	while(x)
	{
		a.push_back(x%2);
		x>>=1;
	}
	reverse(a.begin(),a.end());
	dfs(0);
	return 0;
}