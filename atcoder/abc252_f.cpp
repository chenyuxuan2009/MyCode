#include<bits/stdc++.h>
using namespace std;
int main()
{
	multiset<long long>s;
	long long n,l,ss=0;
	cin>>n>>l;
	for(int i=1;i<=n;i++)
	{
		long long x;
		cin>>x;
		s.insert(x);
		ss+=x;
	}
	if(l-ss!=0)s.insert(l-ss);
	long long sum=0;	
	while(s.size()>1)
	{
		long long x=*s.begin();
		s.erase(s.begin());
		long long y=*s.begin();
		s.erase(s.begin());
		s.insert(x+y);
		sum+=x+y;
	}
	cout<<sum<<endl;
	return 0;
}