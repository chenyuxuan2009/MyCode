#include<bits/stdc++.h>
using namespace std;
pair<int,int>a[100020];
map<pair<int,int>,int>vis;
map<pair<int,int>,int>flag;
int h[6]={-1,-1,0,1,1,0};
int l[6]={-1,0,-1,1,0,1};
int cnt;
pair<int,int>Find(int x,int y,int wx,int wy)
{
	int dx=wx-x,dy=wy-y;
	return make_pair(wx+dx,wy+dy);
}
void dfs(int x,int y,int id,int col)
{
	if(flag[make_pair(x,y)])
}
int main()
{
	
	return 0;
}