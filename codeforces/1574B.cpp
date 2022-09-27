#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,m;
		cin>>a>>b>>c>>m;
		cout<<(m>=max(a,max(b,c))*2-a-b-c-1&&m<=a+b+c-3?"YES\n":"NO\n");
	}
}
