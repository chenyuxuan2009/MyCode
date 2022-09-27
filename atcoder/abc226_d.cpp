#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
set<pair<int,int>>s;
int x[501],y[501];
int g;
int gcd(int x,int y)
{
	return y?gcd(y,x%y):x;
}
main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				continue;
			}
			int dx=x[i]-x[j];
			int dy=y[i]-y[j];
			g=abs(gcd(dx,dy));
			dx/=g;
			dy/=g;
			s.insert(make_pair(dx,dy)); 
		}
	}
	cout<<s.size()<<endl;
}

