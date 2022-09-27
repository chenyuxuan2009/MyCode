#include<bits/stdc++.h>
using namespace std;
long long n,z;
int main()
{
	cin>>n;
	z=n;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			z=min(z,i+n/i-2);
		}
	}
	cout<<z<<endl;
	return 0;
}
