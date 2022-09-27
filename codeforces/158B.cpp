#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n,s1=0,s2=0,s3=0,s4=0,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
			s1++;			
		}
		if(a[i]==2)
		{
			s2++; 
		} 
		if(a[i]==3)
		{
			s3++; 
		} 
		if(a[i]==4)
		{
			s4++; 
		} 
	}
	s=s+s4+s3;
	s1=s1-s3;
	if(s1>0)
	{
		s=s+ceil((s1+s2*2)/4.0);
	}
	else
	{
		s=s+ceil(s2*2/4.0);
	}
	cout<<s;
	return 0;
}


