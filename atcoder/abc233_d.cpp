#include<bits/stdc++.h>
using namespace std;
map<long long,long long> m;
long long s,n,k,x,z; 
int main()
{
	cin>>n>>k;
	m[0]=1;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		s+=x;
		z+=m[s-k];
		m[s]++;
	}
	cout<<z;
	return 0;
}

