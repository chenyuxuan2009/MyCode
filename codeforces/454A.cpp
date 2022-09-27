#include<bits/stdc++.h>
using namespace std;
void print(int n,int i)
{
	if(i<=(n/2))
	{
		for(int k=1;k<=(n-i*2+1)/2;k++)
		{
			cout<<"*";
		}
		for(int k=1;k<=i*2-1;k++)
		{
			cout<<"D";
		}
		for(int k=1;k<=(n-i*2+1)/2;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	else if(i==n/2+1)
	{
		for(int k=1;k<=n;k++)
		{
			cout<<"D";
		}
		cout<<endl;
	}
	else
	{
		print(n,n+1-i);
	}
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		print(n,i);
	}
	return 0;
}
