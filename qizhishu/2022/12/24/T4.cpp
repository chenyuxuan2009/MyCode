#include<bits/stdc++.h>
using namespace std;
void solve()
{	
	long long lens=1,lent=1;
	bool alls=1,allt=1;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		long long op,k;
		char s[500020];
		scanf("%lld%lld%s",&op,&k,s);
		int len=strlen(s);
		long long cnt_a=0;
		for(int i=0;i<len;i++)cnt_a+=(s[i]=='a');
		if(cnt_a!=len)
		{
			if(op==1)alls=0;
			else allt=0;
		}
		if(op==1)lens+=len*k;
		else lent+=len*k;
		if(!allt)printf("YES\n");
		else if(!alls&&allt)printf("NO\n");
		else if(lens>=lent)printf("NO\n");
		else printf("YES\n");
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
	return 0;
}