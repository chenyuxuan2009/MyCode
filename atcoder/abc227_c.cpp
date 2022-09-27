#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,s=0;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		if(i*i*i>n)break;
		for(long long j=i;j<=sqrt(n/i);j++)
		{
			s+=n/i/j-j+1;
		}
	}
	cout<<s;
	return 0;
} 
