#include<bits/stdc++.h>
using namespace std;
set<char>s;
int main()
{
	for(int i=1;i<=4;i++)
	{
		char c;
		cin>>c;
		s.insert(c);
	}
	cout<<(s.size()==2?"Yes":"No")<<endl;
	return 0;
}
