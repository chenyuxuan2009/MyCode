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
	int n=read(),ans=0,z,k=0,l=0;
	int m=read();
	if(n>=m)
	{
		out(n-m);
		goto gt;
	}
	else
	{
		while(m>n)
			n*=2,ans++,l++;
	
		if(n==m)
		{
			out(ans);
			goto gt;
		}
		else
		{
			ans+=n-m,z=n-m;
			for(int i=l;i>=1;i--)
			{
				k=pow(2,i);
				while(z>=k)
					z-=k,ans-=k,ans++;
			}
			out(ans);
			goto gt;
		}
	}
	gt:;
}



