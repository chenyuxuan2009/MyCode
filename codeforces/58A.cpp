#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int x;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='h')
		{
			x=i;
			goto h;
		}
	}
	cout<<"NO";
	return 0;
	h:;
	for(int i=x+1;i<s.size();i++)
	{
		if(s[i]=='e')
		{
			x=i;
			goto e;
		}
	}
	cout<<"NO";
	return 0;
	e:;
	for(int i=x+1;i<s.size();i++)
	{
		if(s[i]=='l')
		{
			x=i;
			goto l1;
		}
	}
	cout<<"NO";
	return 0;
	l1:;
	for(int i=x+1;i<s.size();i++)
	{
		if(s[i]=='l')
		{
			x=i;
			goto l2;
		}
	}
	cout<<"NO";
	return 0;
	l2:;
	for(int i=x+1;i<s.size();i++)
	{
		if(s[i]=='o')
		{
			x=i;
			goto o;
		}
	}
	cout<<"NO";
	return 0;
	o:;
	cout<<"YES";
	return 0;
}


