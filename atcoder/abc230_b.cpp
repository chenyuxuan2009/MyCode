#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	string s;
	bool f=0;
	cin>>s;
	if(s.size()==1)
	{
		f=0;
	}
	else if(s.size()==2)
	{
		if(s=="ox"||s=="xx"||s=="xo")
		{
			f=0;
		}
		else
		{
			f=1;
		}
	}
	else if(s[0]=='o')
	{
		if(s[1]=='x'&&s[2]=='x')
		{
			for(int i=3;i<s.size();i++)
			{
				if(i%3==0)
				{
					if(s[i]!='o')
					{
						f=1; 
					} 
				}
				if(i%3==1)
				{
					if(s[i]!='x')
					{
						f=1; 
					} 
				}
				if(i%3==2)
				{
					if(s[i]!='x')
					{
						f=1; 
					} 
				}
			}
		}
		else
		{
			f=1;
		}
	} 
	else
	{
		if(s[1]=='x')
		{
			for(int i=2;i<s.size();i++)
			{
				if(i%3==2)
				{
					if(s[i]!='o')
					{
						f=1; 
					} 
				}
				if(i%3==0)
				{
					if(s[i]!='x')
					{
						f=1; 
					} 
				}
				if(i%3==1)
				{
					if(s[i]!='x')
					{
						f=1; 
					} 
				}
			}
		}
		else
		{
			for(int i=1;i<s.size();i++)
			{
				if(i%3==1)
				{
					if(s[i]!='o')
					{
						f=1; 
					} 
				}
				if(i%3==2)
				{
					if(s[i]!='x')
					{
						f=1; 
					} 
				}
				if(i%3==3)
				{
					if(s[i]!='x')
					{
						f=1; 
					} 
				}
			}
		}
	}
	puts(f==1?"No":"Yes");
}


