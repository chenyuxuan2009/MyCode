#include<bits/stdc++.h>
using namespace std;
int a[200005];
int b[200005];
int main()
{
	int n,m=2,s=0,k=0,j;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a[i]=1;
		b[i]=i;
	}	
	while(1)
	{
		for(int i=1;i<=n;i++)
		{
			s+=a[i];
			if(s==m)
			{
				cout<<i<<" "; 
				a[i]=0;
				s=0;
				k++;
			}
			if(k==n)
			{ 
				return 0;
			}
		} 
	}
	return 0;
}