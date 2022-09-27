#include<bits/stdc++.h>
#define N 100010
int n,k,a,s[N],p[N];
long long ans=1;
char c;
const int x=998244353;
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=k;i++)
	{
		scanf("\n%c%d",&c,&a);
		if(c=='L')s[a+1]++;
		else s[1]++,s[a+1]--;
		p[a]=1;
	}
	for(int i=1;i<=n;i++)
	{
		s[i]+=s[i-1];
		if(!p[i]) ans=ans*s[i]%x;
	}
	printf("%lld",ans);
}
