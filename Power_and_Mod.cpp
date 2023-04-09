#include<bits/stdc++.h>
using namespace std;
__uint128_t read() 
{
  	__uint128_t x=0;
  	char ch=getchar();
    while(!isdigit(ch))ch=getchar();
  	while(isdigit(ch)) 
	{ 
		x=x*10+(ch-'0'); 
    	ch=getchar(); 
  	}
  	return x; 
}
void write(__uint128_t x) 
{
  	if(x>9)write(x/10); 
  	putchar(x%10+'0');
}
__uint128_t a,b,m,t;
__uint128_t qpow(__uint128_t x,__uint128_t y)
{
	__uint128_t re=1;
	for(;y>0;y>>=1)
	{
		if(y&1)re=re*x%m;
		x=x*x%m;
	}
	return re;
}
int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    t=read();
	while(t--)
	{
		a=read(),b=read(),m=read();
//        write(a);
//		putchar('\n');
//        write(b);
//		putchar('\n');
//        write(m);
//		putchar('\n');
		write(qpow(a,b)%m);
		putchar('\n');
	}
    return 0;
}
