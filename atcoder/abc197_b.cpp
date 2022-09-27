#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int main()
{
	int n,m,x,y,i;
	cin>>n>>m>>x>>y;
	for(i=1;i<=n;i++)std::cin>>a[i]+1;
	int l=y,r=y,u=x,d=x;
	while(l>1&&a[x][l-1]=='.')l--;
	while(r<m&&a[x][r+1]=='.')r++;
	while(u>1&&a[u-1][y]=='.')u--;
	while(d<n&&a[d+1][y]=='.')d++;
	cout<<r-l+1+d-u;
} 
