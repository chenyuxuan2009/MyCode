#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int f=n;
	int a[n+1];
	for(int i=1;i<=n;i++)a[i]=n-i+1;
	for(int nn=0;nn<n;nn++)
	{
		for(int i=1;i<=n;i++)cout<<a[i]<<" ";
		cout<<endl;
		swap(a[f],a[f-1]);
		f--;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
