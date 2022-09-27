#include<bits/stdc++.h>
using namespace std;
string s[2]{"Malvika","Akshat"};
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<s[min(n,m)%2];
	return 0;
}


