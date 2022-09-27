#include<bits/stdc++.h>
using namespace std;
#define int long long 
int n,k,a[100010],b[100010],ans;   
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>k; 
	for(int i=1;i<=n;i++)
		cin>>a[i];
	ans+=a[n]-a[1]+1;   
	for(int i=1;i<n;i++)
		b[i]=a[i+1]-a[i]-1;   
	sort(b+1,b+n);  
	for(int i=n-1;i>=n-k+1;i--)   
		ans-=b[i];  
	cout<<ans<<endl;	
}
