#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
string s;
int z,c,n;
char l; 
main()
{
	cin>>n>>s;
	for(char i:s)
	{
		if(i==l)
		{
			c++;
		}
		else
		{
			l=i;
			z+=c*(c-1)/2;
			c=1;
		}
	}
	z+=c*(c-1)/2;
	cout<<z<<endl;
}
