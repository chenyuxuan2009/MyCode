#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int k[10005];
main()
{
	int a,b,c,f=0;
	cin>>a>>b>>c;
	int x=b%a;
	if(x==0)x=a;
	for(int i=c;i<=a;i++)
	{
		k[++f]=i;
	}
	for(int i=1;i<c;i++)
	{
		k[++f]=i;
	}
	cout<<k[x]<<endl;
}


