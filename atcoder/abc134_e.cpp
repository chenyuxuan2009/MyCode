#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
int main() 
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		x=-x-1;
		*upper_bound(a+1,a+n+1,x)=x;
	}
	cout<<lower_bound(a+1,a+n+1,0)-a-1<<endl;
	return 0;
}