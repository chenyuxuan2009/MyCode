#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
main()
{
	int l,r;
	string s;
	cin>>l>>r>>s;
	reverse(s.begin()+l-1,s.begin()+r);
	cout<<s<<endl;
}


