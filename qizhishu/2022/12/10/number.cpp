#include<bits/stdc++.h>
using namespace std;
int t,n;
int a[100];
char c[100];
set<char>st[100];
void solve()
{
	for(int i=1;i<=50;i++)
	{
		st[i].clear();
	}
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",a+i);
	}
	scanf("%s",c+1);
	for(int i=1;i<=n;i++)
	{
		st[a[i]].insert(c[i]);
	}
	for(int i=1;i<=50;i++)
	{
		if(st[i].size()>1)
		{
			printf("NO\n");
			return;
		}
	}
	printf("YES\n");
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
7
5
2 3 2 4 1
cacta
1
50
a
2
11 22
ab
4
1 2 2 1
aaab
5
1 2 3 2 1
aaaaa
6
1 10 2 9 3 8
azzfdb
7
1 2 3 4 1 1 2
abababb
*/