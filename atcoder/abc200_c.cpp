#include<stdio.h>
int n,cnt[200]; 
long long a;
int main()
{
	scanf("%d",&n); 
	while(n--)
	{
		int x; 
		scanf("%d",&x);
		a+=cnt[x%200]++;
	}
	printf("%lld\n",a);
	return 0;
}
