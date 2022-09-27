#include<bits/stdc++.h>
using namespace std;
int b,e;
bool check(string str)//еп╤о╩ьнд
{
	string st=str;
	reverse(st.begin(),st.end());
	if(st==str)return true;
	else return false;
}
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='0')break;
		b++;	 
	}
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]!='0')break;
		e++;	 
	}
	string st=s.substr(b,s.size()-e-b);
//	cout<<st<<endl;
	puts(b<=e&&check(st)?"Yes":"No");
	return 0;
}


