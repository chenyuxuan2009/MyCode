#include<bits/stdc++.h>
using namespace std;
char a[100005];
int main()
{
	int n,A=0,D=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]=='A')
		{
			A++;
		}
		else
		{
			D++;
		} 
	}
	if(A>D)
	{
		cout<<"Anton";
	}
	else if(D>A)
	{
		cout<<"Danik";
	}
	else
	{
		cout<<"Friendship";
	}
	return 0;
}


