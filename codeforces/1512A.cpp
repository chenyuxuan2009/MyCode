#include<bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
	int t,n,cnt;
	scanf("%d",&t);
	while(t--)
	{
		int flag=0;//flag为了保证它是第一个与前面不同的数
		scanf("%d%d",&n,&a[1]);
		for(int i=2;i<=n;i++)
		{
			scanf("%d",&a[i]);
			if(a[i-1]!=a[i]&&flag==0)
			{
				cnt=i;
				flag=1;
			}
		}
		if(cnt!=n&&a[cnt]==a[cnt+1])//如果这个数与后面一个数一样，说明它前面一个数才是答案
		printf("%d\n",cnt-1);
		if(cnt==n||a[cnt]!=a[cnt+1])
		printf("%d\n",cnt);
	}
}
