#include<bits/stdc++.h>
using namespace std;
const int p=1000000007;
int n,k,u,v;
long long ans=1;
bool vis[100020];
vector<int>a[100020];
void dfs(int u,int tmp)
{
	ans*=tmp;
	ans%=p;
	vis[u]=1;
	int cnt=0;
	for(auto v:a[u])
	{
		if(vis[v])continue;
		int w=(u==1?k-1:k-2);
		w-=cnt;
		dfs(v,w);
		cnt++;
	}
}
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<n;i++)
	{
		scanf("%d%d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}
	dfs(1,k);
	printf("%d\n",(int)ans);
	return 0;
}
/*
4 3
1 2
2 3
3 4

5 4
1 2
1 3
1 4
4 5

16 22
12 1
3 1
4 16
7 12
6 2
2 15
5 16
14 16
10 11
3 10
3 13
8 6
16 8
9 12
4 3
*/