#include<bits/stdc++.h>
using namespace std;
int a[15];
int main()
{
	string s; 
	cin>>s;
	if(s.size()<=2||((s[0]-'A'+s[1]-'A')%26 == s[2]-'A'))
	{
		cout<<"YES"<<endl;
	}
	else 
	{
		cout<<"NO"<<endl;
	}
	return 0;
}


