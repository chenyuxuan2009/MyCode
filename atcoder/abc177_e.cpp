#include<bits/stdc++.h>
using namespace std;
int n;
int cnt[1<<20];
int all=0;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;cin>>a;
		cnt[a]++;
		all=__gcd(all,a);
	}
	bool ok=true;
	for(int i=2;i<1<<20;i++)
	{
		int sum=0;
		for(int j=i;j<1<<20;j+=i)sum+=cnt[j];
		if(sum>1)ok=false;
	}
	cout<<(ok?"pairwise coprime":all==1?"setwise coprime":"not coprime")<<endl;
}
