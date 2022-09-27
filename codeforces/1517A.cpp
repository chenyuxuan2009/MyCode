#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,s;
	cin>>t;
	for(int i=1;i<=t;i++) 
	{
		cin>>n;
		if(n%2050!=0)
		{
			cout<<"-1"<<endl;
			continue; 
		} 
		else
		{
			n=n/2050;
			while(n>0)
			{
				s=s+n%10;
				n=n/10;
			}
			cout<<s<<endl;
			s=0;
			continue;
		}
	}
	return 0;
}


