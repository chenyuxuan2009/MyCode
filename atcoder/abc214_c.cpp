#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 200005
int n,s[N],t[N];
set<pair<int,int>>a;
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
	}
	for (int i=0;i<n;i++)
		a.insert(make_pair(t[i],i));
	while(a.size() > 0)
	{
		int i = a.begin()->second;
    	a.erase(a.begin());
    	if(t[(i + 1) % n] > t[i] + s[i])
    	{
    		a.erase(make_pair(t[(i + 1) % n],(i + 1) % n));
	        t[(i+1)%n]=t[i]+s[i];
	        a.insert(make_pair(t[(i + 1) % n], (i + 1) % n));
		}
	        
	}
    for(int i=0;i<n;i++)cout<<t[i]<<'\n';

}



