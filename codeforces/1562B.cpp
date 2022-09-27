#include<bits/stdc++.h>
using namespace std;
#define int long long
int t,n,x; 
string s;
bool check(int a)//判断质数或合数
{
	if(a==1)return false;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)return false;
	}
	return true;
}
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>n>>s;
		for(int i=0;i<s.size();i++)
		{
			x=s[i]-'0';
			if(check(x)==false)
			{
				cout<<1<<endl<<x<<endl;
				goto gt;
			}
		}
		for(int i=0;i<s.size();i++)
		{
			for(int j=i+1;j<s.size();j++)
			{
				
					x=(s[i]-'0')*10+(s[j]-'0');
					if(check(x)==false)
					{
						cout<<2<<endl<<x<<endl;
						goto gt;
					}
				
			}
		}
		gt:;
	}	
}


