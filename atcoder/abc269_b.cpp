#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int a=10,b=0,c=10,d=0;
	for(int i=0;i<10;i++)
	{
		cin>>s;
		for(int j=0;j<s.size();j++)
		{
			if(s[j]=='#')
			{
				c=min(c,j+1);
				d=max(d,j+1);
				a=min(a,i+1);
				b=max(b,i+1);
			}
		}
	}
	cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;
	return 0;
}