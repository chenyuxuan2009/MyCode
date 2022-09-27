#include<bits/stdc++.h>
using namespace std;
double a[1005];
int main()
{
	int n;   
	double l,r;   
	cin>>n>>l;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}	
	sort(a+1,a+1+n);   
	r=max(a[1],l-a[n]);   
	for(int i=1;i<n;i++)   
	{
		r=max(r,(a[i+1]-a[i])/2);   
	}
	cout<<fixed<<setprecision(10)<<r;
	return 0;
}


