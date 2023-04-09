#include<bits/stdc++.h>
using namespace std;
int t,n,z;
char c[200020];
char tmp;
queue<int>q;
int ans=INT_MIN;
void solve()
{
	ans=INT_MIN;
	while(!q.empty())
	{
		q.pop();
	}
	scanf("%d %c%s",&n,&tmp,c+1);
	for(int i=1;i<=n+n;i++)
	{
		z=i;
		if(z>n)
		{
			z-=n;
		}
		if(i<=n&&c[z]==tmp)
		{
			q.push(z);
		}
		if(c[z]=='g'&&!q.empty())
		{
			ans=max(ans,i-q.front());
			while(!q.empty())
			{
				q.pop();
			}
		}
	}
	printf("%d\n",ans);
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
	return 0;
}
/*
6
5 r
rggry
1 g
g
3 r
rrg
5 y
yrrgy
7 r
rgrgyrg
9 y
rrrgyyygy
*/