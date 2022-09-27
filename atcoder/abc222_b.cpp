#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;

/*×Ô¼º*/
void main_me()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int n,a,s=0;
	cin>>n>>a;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		s+=(x>=a?0:1);
	}
	cout<<s;
}
main()
{
	main_me();

}

