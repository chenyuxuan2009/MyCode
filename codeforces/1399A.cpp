#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
	int N,n;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		cin>>n;
		for(int j=1;j<=n;j++)
		{
			cin>>a[j];
		}
		sort(a+1,a+n+1);
		for(int j=2;j<=n;j++)
		{
			if(a[j]-a[j-1]>1)
			{
				puts("NO");
				goto f;
			}
		}
		puts("YES");
		f:;	
	}
	return 0;
}


