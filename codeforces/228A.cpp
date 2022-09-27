#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,s=0;
	cin>>a>>b>>c>>d;
	if(a==b)
	{
		a=0;
		s++;
	}
	if(a==c)
	{
		a=0;
		s++;
	}
	if(a==d)
	{
		a=0;
		s++;
	}
	if(b==c)
	{
		b=0;
		s++;
	}
	if(b==d)
	{
		b=0;
		s++;
	}
	if(c==d)
	{
		c=0;
		s++;
	}
	cout<<s--;
	return 0;
}


