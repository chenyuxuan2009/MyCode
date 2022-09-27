#include<bits/stdc++.h>
using namespace std;
char a[1020][1020];
int main()
{
	int n;
	bool f=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[j][i]=='D'&&a[i][j]=='D'||a[j][i]=='W'&&a[i][j]=='L'||a[j][i]=='L'&&a[i][j]=='W'||a[j][i]=='-'||a[i][j]=='-')
			{
				
			}
			else
			{
				f=1;
			}
		}
	}
	puts(f==1?"incorrect":"correct");
	return 0;
}