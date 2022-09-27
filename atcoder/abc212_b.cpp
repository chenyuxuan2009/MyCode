#include<bits/stdc++.h>
using namespace std;
int a[10]={1111,2222,3333,4444,5555,6666,7777,8888,9999};
int b[10]={123,1234,2345,3456,4567,5678,6789,7890,8901,9012};
int main()
{
	int n;
	cin>>n;
	if(n==123)
	{
		cout<<"Weak";
		return 0;
	}
 	for(int i=1;i<=9;i++)
 	{
		if(n==a[i])
		{
			cout<<"Weak";
			return 0;
		}
 	}
 	for(int i=1;i<=9;i++)
 	{
		if(n==b[i])
		{
			cout<<"Weak";
			return 0;
		}
 	}
 	cout<<"Strong";
 	return 0;
}
