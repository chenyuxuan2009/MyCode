#include<bits/stdc++.h>
using namespace std;
#define int long long
int a=40,b=70,c=90,x;
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>x;
	if(x<a)
	{
		cout<<a-x;
	}
	else 
	{
		if(x<b)
		{
			cout<<b-x;
		}
		else 
		{
			if(x<c)
			{
				cout<<c-x;
			}
			else
			{
				cout<<"expert";
			}
		}
	}
	gt:;
}



