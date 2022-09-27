#include<bits/stdc++.h>
using namespace std;
int t,n,a[105],s;
int main()
{
	cin>>t;
	while(t--)
	{
		s=INT_MAX;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			s&=a[i];
		}	
		cout<<s<<'\n';
	}
}


