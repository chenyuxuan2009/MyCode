#include<bits/stdc++.h>
using namespace std;
int n,k,t=-1,a,c,s;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		s=s+a;
		c=min(8,max(0,s));
		k=k-c;
		if(k<=0)
		{
			t=i;
			break;
		}
		s=s-c;
	}
	cout<<t;
	return 0;
}


