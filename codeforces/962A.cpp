#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
	int n;
	double s=0,s1=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	for(int i=1;i<=n;i++)
	{
		s1+=a[i];
		if(s1>=s/2)
		{
			cout<<i;
			return 0; 
		}
	}
	return 0;
}


