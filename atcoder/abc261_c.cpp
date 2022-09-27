#include<bits/stdc++.h>
using namespace std;
map<string,int>m;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		m[s]++;
		if(m[s]==1)cout<<s<<endl;
		else cout<<s<<"("<<(m[s]-1)<<")"<<endl;
	}
	return 0;
}