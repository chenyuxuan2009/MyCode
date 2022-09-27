#include<bits/stdc++.h>
using namespace std;
int a[500010];
int b[500010];
int main()
{
	string s;
	cin>>s;
	int l=0;
	for(int i=0;i<s.size();i++) 
	{
		a[++l]=s[i]-'0';
	}
	for(int i=1;i<=l;i++)
	{
		b[i]=b[i-1]+a[i];
	}
	for(int i=l;i>=1;i--)
	{
		b[i-1]+=b[i]/10;
		b[i]%=10;
	}
	for(int i=0;i<=l;i++)
	{
		if(i!=0||b[i]!=0) 
		{
			cout<<b[i];
		}
	}
	return 0;
}
