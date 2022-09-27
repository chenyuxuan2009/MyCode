#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3,"Ofast","inline")
#include<bits/stdc++.h>
using namespace std;
string st[100005],s;
int n,m,i,j;
int main()
{
	cin>>n>>m;
	for(i=0;i<n;i++)cin>>st[i];
	for(i=0,j=0;i<m;i++)
	{
		cin>>s;
		while(st[j]!=s&&j<=n)
		{
			puts("No");
			j++;
		}
		puts("Yes");
		j++;
	}
    return 0;
}
