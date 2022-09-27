#include<bits/stdc++.h>
using namespace std;
string s[200005];
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		if(s[i][0]=='T')
		{
			sum+=4;
		}
		if(s[i][0]=='C')
		{
			sum+=6;
		}
		if(s[i][0]=='O')
		{
			sum+=8;
		}
		if(s[i][0]=='D')
		{
			sum+=12;
		}
		if(s[i][0]=='I')
		{
			sum+=20;
		}
	}
	cout<<sum;
	return 0;
}


