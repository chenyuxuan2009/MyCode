#include<bits/stdc++.h>
using namespace std;
bool check(int a)//判断质数或合数
{
	if(a==1)return false;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)return false;
	}
	return true;
}
int main()
{
	int a,b,c,d;
	bool f=0;
	cin>>a>>b>>c>>d;
	for(int i=a;i<=b;i++)
	{
		f=0;
		for(int j=c;j<=d;j++)
		{
			if(check(i+j))
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			puts("Takahashi");
			return 0;
		}
		
	}
	puts("Aoki");
    return 0;
}
