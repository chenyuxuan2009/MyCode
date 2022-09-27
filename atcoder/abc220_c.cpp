#include<bits/stdc++.h>
using namespace std;
int a[100005];
int n,i;
long long x,sum,k;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	} 
	scanf("%lld",&x);
	k=x/sum*n,x%=sum;
	for(i=1;i<=n&&x>=0;i++) 
		x-=a[i];
	k+=i;
	printf("%lld\n",k-1); 
	system("pause");
	return 0;
}



