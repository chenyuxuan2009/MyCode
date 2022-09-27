#include<bits/stdc++.h>
using namespace std;
#define int long long
string s1,s2;
string m(string s)
{
	if(s.size()&1)return s;
	string S1=s.substr(0,s.size()/2);
	string S2=s.substr(s.size()/2,s.size()/2);
	S1=m(S1);
	S2=m(S2);
	return (S1<S2?S1+S2:S2+S1); 
} 
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>s1>>s2;
	cout<<(s1.size()!=s2.size()||m(s1)!=m(s2)?"NO":"YES");
	gt:;
}



