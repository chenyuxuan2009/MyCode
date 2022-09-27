#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum,ne,zero,t; 
int main()
{
	cin>>t;
	while(t--)
	{
		ll x;
		cin>>x;
		if(x==0)
		{
			sum++;
			zero++;
			continue;
		}
		if(x<0)
			sum+=1-x,ne++;
		else 
			sum+=x-1;
	}
	if(ne%2==1&&zero>0)
			sum-=2;
		cout<<sum-(ne/2*4)<<'\n'; 
    return 0;
}
