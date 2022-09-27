#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	int cnt=0;
	string s;
	
	cin>>s;
	if(s[0]!=s[1])cnt++;
	if(s[0]!=s[2])cnt++;
	if(s[1]!=s[2])cnt++;
	cout<<(cnt==3?6:cnt*(cnt-1)+1);
}

