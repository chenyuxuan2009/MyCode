#include<bits/stdc++.h>
using namespace std;
#define int long long
void tentwo(int n,int x)
{
	if(n==0)return;
	tentwo(n/x,x);
	cout<<n%x*2LL;
}
main()
{
	int n;
	cin>>n;
	tentwo(n,2LL);
	return 0;
}
