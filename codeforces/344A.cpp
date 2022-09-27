#include<bits/stdc++.h>
using namespace std;
string a[100005];
int main()
{
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=2;i<=n;i++)
	{
		if(a[i]!=a[i-1])
		{
			s++;
		}
	}
	cout<<s+1;
	return 0;
}


