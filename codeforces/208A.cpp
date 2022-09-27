#include<bits/stdc++.h>
using namespace std;
string s;
bool flag=1;
int main()
{
	cin>>s;
	for(int i=2;i<s.size();i++)
	{
		if(s[i]=='B'&&s[i-1]=='U'&&s[i-2]=='W')
		{
			s[i]=s[i-1]=s[i-2]=' ';
		}
	}
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=' ')
		{
			flag=0;
		}
		if(flag==0)
		{
			cout<<s[i];
		}
		if(s[i]==' ')
		{
			flag=1;
		}
	}
	return 0;
}


