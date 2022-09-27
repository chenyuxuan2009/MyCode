#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool cmp(pair<ll,ll>a,pair<ll,ll>b)
{
	return a.second>b.second;
}
void solve()
{
	ll n,m;
	cin>>n;
	vector<pair<ll,ll>>a;
	vector<ll>b;
	vector<ll>c;
	m=n;
	for(int i=2;i<=sqrt(m);i++)
	{
		pair<ll,ll>p;
		p.first=i;
		ll sum=0;
		while(m%i==0)
		{
			// a.push_back(i);
			m/=i;
			sum++;
		}
		p.second=sum;
		if(sum!=0)a.push_back(p);
	}
	if(m!=0)a.push_back(make_pair(m,1));
	sort(a.begin(),a.end(),cmp);
	for(auto i:a)
	{
		for(ll j=1;j<=i.second;j++)
		{
			c.push_back(i.first);
		}
	}
	// for(auto i:c)
	// {
	// 	cout<<i<<" ";
	// }
	b.push_back(c[0]);
	for(int i=1;i<(int)c.size();i++)
	{
		if(c[i]!=c[i-1])
		{
			for(int j=i;j<(int)c.size();j++)
			{
				b[i-1]*=c[j];
			}
			break;
		}
		else b.push_back(c[i]);
	}
	cout<<b.size()<<endl;
	for(auto i:b)
	{
		cout<<i<<" ";
	}
	cout<<endl;
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