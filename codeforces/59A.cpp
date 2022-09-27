#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int s1=0,s2=0;
	cin>>a;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
			s1++;
		}
		else
		{
			s2++;
		}
	}
	if(s1<s2)
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i]>=97&&a[i]<=122)
			{
				a[i]=char(a[i]-32);
			}
		}
	}
	else
	{
		for(int i=0;i<a.size();i++)
		{
			if(a[i]>=60&&a[i]<=95)
			{
				a[i]=char(a[i]+32);
			}
		}
	}
	cout<<a;
	return 0;
}


