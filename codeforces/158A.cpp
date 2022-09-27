#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
	int n,k,s=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=a[k]&&a[i]>0)
		{
			s++;
		}
	}
	cout<<s<<endl;
	return 0;
}


