#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int gcd(int x,int y)
{
	return y?gcd(y,x%y):x;
}
int lcm(int x,int y)
{
	return x/gcd(x,y)*y;
}
main()
{
	int n,ans=1;
	cin>>n;
	for(int i=2;i<=n;i++)ans=lcm(i,ans);
	cout<<ans+1<<endl;
}

