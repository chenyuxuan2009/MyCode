#include<bits/stdc++.h>
using namespace std;
long long ans,n;
int main()
{
	cin>>n;
	for(int j=1;j<=n;j++)
	{
		ans+=(j+n/j*j)*(n/j)/2;
	}
	cout<<ans<<endl;
	return 0;
}
