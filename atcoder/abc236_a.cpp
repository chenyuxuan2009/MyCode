#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n,m;
	cin>>n>>m;
	swap(s[n-1],s[m-1]);
	cout<<s;
    return 0;
}
