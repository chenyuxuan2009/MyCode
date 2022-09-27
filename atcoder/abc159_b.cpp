#include<bits/stdc++.h>
using namespace std;
bool check(string str)
{
	string st=str;
	reverse(st.begin(),st.end());
	if(st==str)return true;
	else return false;
}
int main()
{
	string s,t="";
	cin>>s;
	for(int i=0;i<(s.size()+1)/2-1;i++)t+=s[i];
	puts(check(s)&&check(t)?"Yes":"No");
    return 0;
}
