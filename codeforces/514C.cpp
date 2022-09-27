#include<bits/stdc++.h>
#define int long long
using namespace std;
const int m1=999999937;
const int m2=104857601;
const int x=33533;
int h[555555];
int s[555555];
main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdin);
	int n,m;
	scanf("%lld%lld",&n,&m);
	for(int i=0;i<n;i++)
	{
		int c=getchar();
		while(c<=32)c=getchar();
		int h1=0,h2=0;
		while(c>32)
		{
			h1=(h1*x+c)%m1;
			h2=(h2*x+c)%m2;
			c=getchar();
		}
		h[i]=(h1<<32)|h2;
	}
	sort(h,h+n);
	for(int i=0;i<m;i++)
	{
		int c=getchar();
		while(c<=32)c=getchar();
		int h1=0,h2=0,len=0;
		while(c>32)
		{
			h1=(h1*x+c)%m1;
			h2=(h2*x+c)%m2;
			s[len++]=c;
			c=getchar();
		}	
		int p1=1,p2=1,ans=0;
		for(int j=len-1;j>=0;j--)
		{
			for(int let='a';let<='c';let++)
			{
				if(let==s[j])continue;
				int ch1=(h1+p1*(let-s[j])+m1*m1)%m1,ch2=(h2+p2*(let-s[j])+m2*m2)%m2,ch=(ch1<<32)|ch2,l=-1,r=n;
				while(l<r-1)
				{
					int mid=(l+r)/2;
					if(h[mid]>ch)r=mid;
					else l=mid;
				}
				if(l>=0&&h[l]==ch)
				{
					ans=1;
					j=-1;
					break;
				 } 
			}
			p1=p1*x%m1;
			p2=p2*x%m2;
		}
		if(ans)puts("YES");
		else puts("NO");
	} 
}
