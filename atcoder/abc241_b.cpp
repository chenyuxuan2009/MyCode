#include<bits/stdc++.h>
using namespace std;
long long a[1001];
bool fl[1001];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(m--)
	{
		bool f=0;
		long long x;
		cin>>x;
		for(int i=1;i<=n;i++)
		{
			if(a[i]==x&&fl[i]==0)
			{
				f=1;
				fl[i]=1;
				break;
			}
		}
		if(f==0){puts("No");return 0;}
	}
	puts("Yes");
    return 0;
}
