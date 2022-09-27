#include<bits/stdc++.h>
using namespace std;
long long t,n,q,x;
int main()
{
	cin>>t;
	for(long long tt=0;tt<t;tt++)
	{
		long long f=0,g=0;
		cin>>n>>q;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			long long nf=max(f,g+x);
			long long ng=max(g,f-x);
			f=nf;
			g=ng;
		}
		cout<<f<<endl;
	}
	return 0;
}
