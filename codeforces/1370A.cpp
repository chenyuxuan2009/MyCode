#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 10000005
inline int read()
{
    int X=0,w=1;
    char c=getchar();
    while(c<'0'||c>'9')
    {
        if (c=='-')
        {
            w=-1;
        }
        c=getchar();
    }
    while(c>='0'&&c<='9')
    {
        X=(X<<3)+(X<<1)+c-'0';
        c=getchar();
    }
    return X*w;
}
inline void out(int n)
{
    if(n<0)
    {
        putchar('-');
        n=-n;
    }
    if(n>=10)
    {
        out(n/10);
    }
    putchar(n%10+'0');
}

signed main()
{
//	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int t=read();
	while(t--)
	{
		int n=read();
		out(n/2);
		cout<<endl;
	}
	
}



