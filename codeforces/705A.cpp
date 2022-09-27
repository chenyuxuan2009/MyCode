#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,i;
	string s="";
	cin>>a;
	for(i=1;i<=a-1;i++)
	{
		if(i%2==1)
		{
			s=s+"I hate that ";
		} 
		else
		{
			s=s+"I love that ";
		}
	} 
	if(i%2==1)
	{
		s=s+"I hate it";
	} 
	else
	{
		s=s+"I love it";
	}
	cout<<s;
	return 0;
}


