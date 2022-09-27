#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	if(m==1)
	{
		puts("YES");
		for(int i=0;i<n;i++)cout<<i+1<<endl;
	}
	else if(n%2==0)
	{
		puts("YES");
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<i/2*2*m+i%2+2*j+1<<" ";
			}
			cout<<endl;
		}
	}
	else
	{
		puts("NO");
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
