#include<bits/stdc++.h>
using namespace std;
multiset<int,greater<int>>s;
int a[200005];
int b[200005];
int minn=INT_MAX;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		s.insert(x); 
	}
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		set<int>::iterator it=s.lower_bound(x); 
		if(it==s.end())
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<*it<<endl;
			s.erase(it);
		}
	}
	return 0;
}