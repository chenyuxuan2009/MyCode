#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s=0,s1=0,s2=0,a,b,c;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		s=s+a;
		s1=s1+b;
		s2=s2+c; 
	}
	if(s==0&&s1==0&&s2==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}
 
