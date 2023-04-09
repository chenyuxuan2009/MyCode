#include<iostream>
using namespace std;
int a[1000020];
int q[1000020],b,f;
int n,m;
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	b=f=0;
	for(int i=1;i<=n;i++)
	{
		while(b<f&&a[q[f-1]]>=a[i])
		{
			f--;
		}
		q[f++]=i;
		while(q[b]<=i-m)
		{
			b++;
		}
		if(i>=m)
		{
			printf("%d ",a[q[b]]);
		}
	}
	puts("");
	b=f=0;
	for(int i=1;i<=n;i++)
	{
		while(b<f&&a[q[f-1]]<=a[i])
		{
			f--;
		}
		q[f++]=i;
		while(q[b]<=i-m)
		{
			b++;
		}
		if(i>=m)
		{
			printf("%d ",a[q[b]]);
		}
	}
	return 0;
}