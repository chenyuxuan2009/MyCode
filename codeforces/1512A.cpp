#include<bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
	int t,n,cnt;
	scanf("%d",&t);
	while(t--)
	{
		int flag=0;//flagΪ�˱�֤���ǵ�һ����ǰ�治ͬ����
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
		if(cnt!=n&&a[cnt]==a[cnt+1])//�������������һ����һ����˵����ǰ��һ�������Ǵ�
		printf("%d\n",cnt-1);
		if(cnt==n||a[cnt]!=a[cnt+1])
		printf("%d\n",cnt);
	}
}
