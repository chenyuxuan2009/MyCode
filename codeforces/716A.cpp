#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n,c,s=0; 
	cin>>n>>c;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(i==1) 
		{
			s++;
		}
		else
		{
			if(a[i]-a[i-1]<=c) 
			{
				s++;
			}
			else
			{
				s=1;
			}
		}
	}
	cout<<s;
	return 0;
}


