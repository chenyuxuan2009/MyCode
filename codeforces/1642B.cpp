#include<bits/stdc++.h>
using namespace std;
void solve()
{
	set<long long>s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long x;
		cin>>x;
		s.insert(x);
	}
	int cnt=s.size();
	for(int i=0;i<n;i++)cout<<max(i+1,cnt)<<" ";
	cout<<endl;
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
