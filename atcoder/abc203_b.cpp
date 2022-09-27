#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;

/*×Ô¼º*/
void main_me()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int n,m,sum=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			sum+=i*100+j;
		}
	}
	cout<<sum;
}
main()
{
	main_me();

}

