#include<bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=4*n-1;i++)
	{
		int x;
		cin>>x;
		a[x]++;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==3)
		{
			cout<<i;
			return 0;
		}
	}
    return 0;
}
