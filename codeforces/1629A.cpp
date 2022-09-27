#include<bits/stdc++.h>
using namespace std;
struct x
{
	int a,b;
};
bool cmp(x a,x b)
{
	return a.a<b.a;
}
void solve()
{
	int n,k;
	cin>>n>>k;
	x arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i].a;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i].b;
	}
	sort(arr+1,arr+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		if(arr[i].a<=k)
		{
			k+=arr[i].b;
		}
		else continue;
	}
	cout<<k<<endl;
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
