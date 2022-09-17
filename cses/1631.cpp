#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long sum=0,maxx=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		long long x;
		cin>>x;
		sum+=x;
		maxx=max(maxx,x);
	}
	cout<<(maxx>sum-maxx?2*maxx:sum)<<endl;
	return 0;
}