#include<bits/stdc++.h>
using namespace std;
set<long long>s;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long x;
		cin>>x;
		s.insert(x);
	}
	cout<<s.size()<<endl;
    return 0;
}
