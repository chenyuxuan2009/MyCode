#include<bits/stdc++.h>
using namespace std;
string s;
int c;
int main()
{
	cin>>s;
	for(char i:s)
	{
		if(i=='0')
		{
			c++;
		}
	}
	cout<<min(c,int(s.size())-c)*2<<endl;
	return 0;
}

