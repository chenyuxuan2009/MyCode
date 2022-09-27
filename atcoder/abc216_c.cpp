#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
string s="";
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n;
	
	if(n%2==1)
	{
		s="A"+s; 
		n-=1;
	}
	while(n%2==0&&n>0)
	{
		s="B"+s;
		n/=2;
		if(n%2==1)
		{
			n-=1;
			s="A"+s;
		}
	}
	cout<<s;
	gt:;
}



