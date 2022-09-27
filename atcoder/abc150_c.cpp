#include<bits/stdc++.h>
using namespace std;
int n,a[9],z;
main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	while(prev_permutation(a,a+n))
	{
		z++;	
	}	
	for(int i=0;i<n;i++)
		cin>>a[i];
	while(prev_permutation(a,a+n))
	{
		z--;	
	}	
	cout<<abs(z);
}

