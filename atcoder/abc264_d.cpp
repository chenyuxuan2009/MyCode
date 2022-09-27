#include<bits/stdc++.h>
using namespace std;
int a[130];
int main()
{
	a['a']=0;
	a['t']=1;
	a['c']=2;
	a['o']=3;
	a['d']=4;
	a['e']=5;
	a['r']=6;
	string s;
	int cnt=0;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		for(int j=i+1;j<s.size();j++)
		{
			if(a[s[i]]>a[s[j]])cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}

