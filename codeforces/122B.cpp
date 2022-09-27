#include<bits/stdc++.h>
using namespace std;
signed main()
{
	string s;
	cin>>s;
	int sum4=0,sum7=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='4')sum4++;
		if(s[i]=='7')sum7++;
	}
	if(sum4+sum7==0)cout<<-1;
	else if(sum4>=sum7)cout<<4;
	else cout<<7; 
	return 0;
}
