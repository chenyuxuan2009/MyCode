#include<bits/stdc++.h>
using namespace std;
#define int long long
int t; 
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		if(r/2>=l)
		{
			cout<<r%(r/2+1);
		}
		else
		{
			cout<<r%l;
		}
		cout<<endl;
	} 
	gt:;
}



