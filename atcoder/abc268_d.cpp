#include<bits/stdc++.h>
using namespace std;
string s[10];
bool f[10];
map<string,bool>mp;
int n,m;
void dfs(int dep)
{
	if(dep>n)
	{
		string z="";
		for(int i=1;i<=n;i++)
		{
			if(f[i])
			{
				z+=s[i]+'_';
			}
		}
		z=z.substr(0,z.size()-1);
		if(!mp[z]&&z.size()>=3&&z.size()<=16)
		{
			puts(z.data());
			exit(0);
		}
		return;
	}
	f[dep]=1;
	dfs(dep+1);
	f[dep]=0;
	dfs(dep+1);
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	while(m--)
	{
		string t;
		cin>>t;
		mp[t]=1;
	}
	dfs(1);
	puts("-1");
	return 0;
}
/*
2 2
choku
dai
chokudai
choku_dai
*/