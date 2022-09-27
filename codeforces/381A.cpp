#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
main()
{
	int n,ansD=0,ansS=0;
	cin>>n; 
	int a[n+1];
	for(int i=1;i<=n;i++)cin>>a[i];
	int l=1,r=n;
	int f=0;
	while(l<=r)
	{
		f^=1;
		if(f==1)
		{
			if(a[l]<a[r])ansS+=a[r],r--;
			else ansS+=a[l],l++;
		}
		else
		{
			if(a[l]<a[r])ansD+=a[r],r--;
			else ansD+=a[l],l++;
		}
	}
	cout<<ansS<<" "<<ansD<<endl;
}
