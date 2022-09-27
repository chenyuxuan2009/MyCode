#include<bits/stdc++.h>
using namespace std;
set<vector<int>>s;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	vector<int>a;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	s.insert(a);
	}
	cout<<s.size()<<endl;
}
