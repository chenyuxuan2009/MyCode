#include<bits/stdc++.h>
using namespace std;
long long a[1000000],t,n,m,j;
int main()
{
	cin>>t;
	while(t--)
	{
		m=0;
		cin>>n;
		for(j=1;j<=n;j++)
		{
			cin>>a[j];
			if(j>1)m=max(a[j]*a[j-1],m); 	
		}
		cout<<m<<"\n";
	}
	return 0;
}
