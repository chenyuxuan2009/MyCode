#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int a[105];
main()
{
	int n,s=0;
	cin>>n;
	int x=-1;
	if(n==0)
	{
		cout<<0;
		exit(0); 
	}
	while(n!=0)
	{
		a[++x]=n%(-2);
		n/=(-2);
		if(a[x]==(-1))
		{
			n++;
			a[x]=1; 
		}
	}
	reverse(a,a+x+1);
//	int b[x+1];
//	memcpy(b,a,x+1);
	for(int i:a)
	{
		s++;
		cout<<i;
		if(s==x+1)exit(0);
	}
		
}

