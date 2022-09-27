#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
struct SB
{
	int l,r,i;
}a[300020]; 
bool cmp(const SB&a,const SB&b)
{
	return (a.l!=b.l?a.l<b.l:a.r>b.r);
}
main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].l>>a[i].r;
		a[i].i=i+1;
	}
	sort(a,a+n,cmp);
	for(int i=1;i<n;i++)
	{
		if(a[i-1].r>=a[i].r)
		{
			cout<<a[i].i<<" "<<a[i-1].i<<endl;
			goto gt;
		}
	}
	cout<<"-1 -1\n";
	gt:;
}

