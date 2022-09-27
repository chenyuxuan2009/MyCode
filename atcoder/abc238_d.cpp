#include<bits/stdc++.h>
using namespace std;
void solve()
{
	long long a,s;
	cin>>a>>s;
	long long b=s-2*a;
	if(b<0)cout<<"No"<<endl;
	else if(b&a)cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--) 
	{
		solve();
	}
    return 0;
}
