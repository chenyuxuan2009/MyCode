#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,ans=1;
	cin>>n>>k;
	while(n--)
	{
		ans+=min(ans,k);
	}	
	cout<<ans<<endl;
	return 0;
}