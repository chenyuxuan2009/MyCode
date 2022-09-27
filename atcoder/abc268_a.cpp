#include<bits/stdc++.h>
using namespace std;
set<int>s;
int main()
{
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	s.insert({a,b,c,d,e});
	cout<<s.size()<<endl;
	return 0;
}