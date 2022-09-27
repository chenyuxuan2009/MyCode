#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3,"Ofast","inline")

#include<bits/stdc++.h>

#define getchar() p1==p2&&(p2=(p1=buf)+fread(buf,1,1000000,stdin),p1==p2)?EOF:*p1++

using namespace std;

char buf[1000000],*p1=buf,*p2=buf;
inline int read()
{
    register char c=getchar();register int x=0;
	while(c<'0'||c>'9')c=getchar();
	while(c>='0'&&c<='9')x=(x<<1)+(x<<3)+(c^48),c=getchar();
	return x;
}

int a[100005];
int main()
{
	int n,maxx=INT_MAX;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]<=a[i-1])break;
		maxx=a[i];
	}
	cout<<maxx<<endl;
    return 0;
}
