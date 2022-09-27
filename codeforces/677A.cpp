#include<bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
	int n,h,s=0;
	cin>>n>>h;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>h)
		{
			s+=2;
		}
		else
		{
			s++;
		}
	}
	cout<<s;
	return 0;
}


