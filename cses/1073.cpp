#include<bits/stdc++.h>
using namespace std;
multiset<int>s; 
int n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		multiset<int>::iterator it=s.upper_bound(x);
		if(it==s.end())s.insert(x);
		else s.erase(it),s.insert(x);
	}
	cout<<s.size()<<endl;
	return 0;
}