#include<bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
	int n,k,minn=INT_MAX; 
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(k%a[i]==0&&k/a[i]<minn)
		{
			minn=k/a[i];
		}
	}
	cout<<minn;
	return 0;
}


