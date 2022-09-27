#include<bits/stdc++.h>
using namespace std;
long long n,s=0,a,m=0,k=1;
int main()
{
	cin>>n;
	a=n;
	while(a)
	{
		a/=10;
		m++;
	}
	s=n*m+m-1;
	for(int i=1;i<=m-1;i++)
	{
		k=k*10;
		s-=k;
	}
	cout<<s;
	return 0;
}


