#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int l=0,r=n+1,lsum=0,rsum=0,rnd=0,lnow=0,rnow=0;
	while(l+1<r)
	{
		if(rnd%2==0)
		{
			l++;
			lsum+=a[l];
			lnow+=a[l];
			if(lnow>rnow||l==r-1)
			{
				rnow=0;
				rnd++;
			}
		}
		else
		{
			r--;
			rsum+=a[r];
			rnow+=a[r];
			if(rnow>lnow||l==r-1)
			{
				lnow=0;
				rnd++;
			}
		}
	}
	cout<<rnd<<" "<<lsum<<" "<<rsum<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}