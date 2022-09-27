#include<bits/stdc++.h>
using namespace std;
int a[500005],z;
int main()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int x=1;x!=2;x=a[x])
	{
		z++;
		if (z>n)
		{
			cout<<"-1"<<endl;
			return 0;
		}
	}
	cout<<z<<endl;
	return 0;
}
 
