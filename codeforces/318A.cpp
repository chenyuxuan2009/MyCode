#include<bits/stdc++.h>
using namespace std;
long long n,k;
int main()
{
	cin>>n>>k;
	long long odd=ceil(n/2.0);
	if(k>odd) 
	{
		cout<<(k-odd)*2<<endl;
	}
	else 
	{
		cout<<k*2-1<<endl;
	}
	return 0;
}


