#include<bits/stdc++.h>
using namespace std;
long long n,sum,maxx=INT_MIN;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long x;
		cin>>x;
		sum=max(sum+x,x);
		maxx=max(maxx,sum);
	}
	cout<<maxx<<endl;
	return 0;
}