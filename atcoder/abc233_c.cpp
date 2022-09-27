#include<bits/stdc++.h>
using namespace std;
long long a[1010][1010];
int l[100010];
long long f[1010][1010];
multiset<long long> s;
int main()
{
	int n;
	long long x;
	cin>>n>>x;
	s.insert(1);
	for(int i=0;i<n;i++)
	{
		cin>>l[i];
		multiset<long long> z;
		z.clear(); 
		for(int j=0;j<l[i];j++)
		{
			long long y;
			cin>>y; 
			for(auto k:s)
			{
				if(y*k<=x) 
				{
					z.insert(y*k);
				} 
			}
		}
		s=z;
	}
	int ans=0;
	for(auto i:s)
	{
		ans+=(i==x); 
	}
	cout<<ans;
	return 0;
}
