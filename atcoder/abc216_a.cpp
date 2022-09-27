#include<bits/stdc++.h>
using namespace std;
#define int long long
int a,b;char c; 
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>a>>c>>b;
	if(b<=2)cout<<a<<'-';
	else if(b<=6)cout<<a;
	else if(b<=9)cout<<a<<'+';
}



