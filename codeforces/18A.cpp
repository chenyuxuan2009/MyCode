#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b,int c)
{
	if(a>b)swap(a,b);
	if(b>c)swap(b,c);
	return a+b==c&&a>0&&b>0&&c>0;
}
int mi(int a)
{
	return a*a;
}
int x[4],y[4];
int main()
{
	for(int i=1;i<=3;i++)
	{
		cin>>x[i]>>y[i];
	}
	if(check(mi(x[1]-x[2])+mi(y[1]-y[2]),mi(x[2]-x[3])+mi(y[2]-y[3]),mi(x[1]-x[3])+mi(y[1]-y[3]))){puts("RIGHT");return 0;}
	if(check(mi((x[1]+1)-x[2])+mi(y[1]-y[2]),mi(x[2]-x[3])+mi(y[2]-y[3]),mi((x[1]+1)-x[3])+mi(y[1]-y[3]))){puts("ALMOST");return 0;}
	if(check(mi((x[1]-1)-x[2])+mi(y[1]-y[2]),mi(x[2]-x[3])+mi(y[2]-y[3]),mi((x[1]-1)-x[3])+mi(y[1]-y[3]))){puts("ALMOST");return 0;}
	if(check(mi(x[1]-x[2])+mi((y[1]+1)-y[2]),mi(x[2]-x[3])+mi(y[2]-y[3]),mi(x[1]-x[3])+mi((y[1]+1)-y[3]))){puts("ALMOST");return 0;}
	if(check(mi(x[1]-x[2])+mi((y[1]-1)-y[2]),mi(x[2]-x[3])+mi(y[2]-y[3]),mi(x[1]-x[3])+mi((y[1]-1)-y[3]))){puts("ALMOST");return 0;}
	if(check(mi(x[1]-(x[2]+1))+mi(y[1]-y[2]),mi((x[2]+1)-x[3])+mi(y[2]-y[3]),mi(x[1]-x[3])+mi(y[1]-y[3]))){puts("ALMOST");return 0;}
	if(check(mi(x[1]-(x[2]-1))+mi(y[1]-y[2]),mi((x[2]-1)-x[3])+mi(y[2]-y[3]),mi(x[1]-x[3])+mi(y[1]-y[3]))){puts("ALMOST");return 0;}
	if(check(mi(x[1]-x[2])+mi(y[1]-(y[2]+1)),mi(x[2]-x[3])+mi((y[2]+1)-y[3]),mi(x[1]-x[3])+mi(y[1]-y[3]))){puts("ALMOST");return 0;}
	if(check(mi(x[1]-x[2])+mi(y[1]-(y[2]-1)),mi(x[2]-x[3])+mi((y[2]-1)-y[3]),mi(x[1]-x[3])+mi(y[1]-y[3]))){puts("ALMOST");return 0;}
	if(check(mi(x[1]-x[2])+mi(y[1]-y[2]),mi(x[2]-(x[3]+1))+mi(y[2]-y[3]),mi(x[1]-(x[3]+1))+mi(y[1]-y[3]))){puts("ALMOST");return 0;}
	if(check(mi(x[1]-x[2])+mi(y[1]-y[2]),mi(x[2]-(x[3]-1))+mi(y[2]-y[3]),mi(x[1]-(x[3]-1))+mi(y[1]-y[3]))){puts("ALMOST");return 0;}
	if(check(mi(x[1]-x[2])+mi(y[1]-y[2]),mi(x[2]-x[3])+mi(y[2]-(y[3]+1)),mi(x[1]-x[3])+mi(y[1]-(y[3]+1)))){puts("ALMOST");return 0;}
	if(check(mi(x[1]-x[2])+mi(y[1]-y[2]),mi(x[2]-x[3])+mi(y[2]-(y[3]-1)),mi(x[1]-x[3])+mi(y[1]-(y[3]-1)))){puts("ALMOST");return 0;}
	puts("NEITHER");
	return 0;
}
