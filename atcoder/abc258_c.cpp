#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,c=0;
	string s;
	cin>>n>>q>>s;
	while(q--)
	{
		int o;
		cin>>o;
		if(o==1)
		{
			int x;
			cin>>x;
			c+=x;
			c%=n;
		}
		else
		{
			int y=n-c;
			int x;
			cin>>x;
			if(x<=c)
			{
				cout<<s[y-1+x]<<endl;
			}
			else
			{
				x-=c;
				cout<<s[x-1]<<endl;
			}
		}
	}
	return 0;
}