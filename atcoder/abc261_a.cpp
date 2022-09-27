#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l1,r1,l2,r2,ans=0;
	cin>>l1>>r1>>l2>>r2;
	for(int i=l1;i<=r1;i++)
	{
		if(l2<=i&&i<=r2)ans++;
	}
	cout<<max(0,ans-1)<<endl;
	return 0;
}