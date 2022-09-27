#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,minn=32;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		minn=min(minn,a[i]);
	}
	cout<<(minn^a[2])+2<<endl;
	return 0;
}
