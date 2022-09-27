#include<bits/stdc++.h>
using namespace std;
bool judge(char a,char b,char c)
{
	return a=='A'&&b=='B'&&c=='C';
}
int main()
{
	int n,sum=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<s.size()-2;i++)
	{
		sum+=judge(s[i],s[i+1],s[i+2]);
	}
	cout<<sum<<endl;
	return 0;
}