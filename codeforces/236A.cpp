#include<bits/stdc++.h>
using namespace std;
bool is[30];
int main()
{
	string a;
	int s=0;
	cin>>a;
	for(int i=0;i<a.size();i++)
	{
		is[a[i]-'a']=1;
	}
	for(int i=0;i<26;i++)
	{
		if(is[i])
		{
			s++;
		}
	}
	if(s%2!=0)
	{
		cout<<"IGNORE HIM!";
	}
	else
	{
		cout<<"CHAT WITH HER!";
	}
	return 0;
}
