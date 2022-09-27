#pragma GCC optimize(1)
#pragma GCC optimize(2)
#pragma GCC optimize(3,"Ofast","inline")

#include<bits/stdc++.h>

#define getchar() p1==p2&&(p2=(p1=buf)+fread(buf,1,1000000,stdin),p1==p2)?EOF:*p1++

using namespace std;

char buf[1000000],*p1=buf,*p2=buf;
inline int read()
{
    register char c=getchar();register int x=0;register bool f=0;
	for(;!isdigit(c);c=getchar())f^=!(c^45);
	for(;isdigit(c);c=getchar())x=(x<<1)+(x<<3)+(c^48);
	if(f)x=-x;return x;
}



int main()
{
	int month,day;
	cin>>month>>day;
	puts(month%day==0?"YES":"NO");
    return 0;
}
