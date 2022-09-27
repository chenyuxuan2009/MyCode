#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int o[300005],x[300005],y[300005],z[300005];
set<int>r,co;
main()
{
	int h,w,c,q;
	cin>>h>>w>>c>>q;
	for(int i=0;i<q;i++)
	{
		cin>>o[i]>>x[i]>>y[i];
	}
	for(int i=q-1;i>=0;i--)
	{
		if(o[i]==1)
		{
			if(r.find(x[i])==r.end())
			{
				r.insert(x[i]);
				h--;
				z[y[i]]+=w;
			}
		}
		else
		{
			if(co.find(x[i])==co.end())
			{
				co.insert(x[i]);
				w--;
				z[y[i]]+=h;
			}
		}
	}
	for(int i=1;i<=c;i++)
	{
		cout<<z[i]<<" ";
	}
}


