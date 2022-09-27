#include<bits/stdc++.h>
using namespace std;
int a[110];
int n;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		int x
		,y;
		x=y=1;	
		for(int i=2;i<=n;i++)
		{
			if(a[i]>a[x])x=i;	
			if(a[i]<a[y])y=i;
		}
		int ans1=x+(n-y+1);			
		int ans2=y+(n-x+1);		
		int ans3=max(x,y);		
		int ans4=max(n-x+1,n-y+1);	
		printf("%d\n",min(min(ans1,ans2),min(ans3,ans4)));
	}
	return 0;
}
