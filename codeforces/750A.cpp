#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i;
	cin>>n>>k;
	int s=240-k;
	for(i=1;i<=n;i++)
	{
		if(i*5>s)
		{
			cout<<i-1;
			return 0;
		}
		s-=i*5;
	}
	cout<<n;
	return 0;
}


