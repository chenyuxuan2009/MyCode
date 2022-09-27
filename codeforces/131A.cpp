#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	for(int i=1;i<a.size();i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			continue;
		}
		else
		{
			goto b;
		}
	}
	for(int i=0;i<a.size();i++)
	{
		if(a[i]<=90)
		{
			a[i]+=32;
		}
		else
		{
			a[i]-=32;
		}
	}
	cout<<a;
	return 0;
	b:;
	cout<<a;
	return 0;
}


