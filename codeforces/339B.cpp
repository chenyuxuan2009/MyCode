#include<bits/stdc++.h>
using namespace std;
long long a[100005]; 
int main()
{
	long long n,m,s=0;
	cin>>m>>n;
	a[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>a[i-1])
		{
			s=s+a[i]-a[i-1];
		}
		else if(a[i]<a[i-1])
		{
			s=s+m-a[i-1]+a[i];
		}
		else
		{
			continue;
		}
	} 
	cout<<s-1;
	return 0;
}


