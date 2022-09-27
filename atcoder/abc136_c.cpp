#include<bits/stdc++.h>
using namespace std;
int n;
int a[100001];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1; i<=n; i++) 
	{
		if(a[i-1]>a[i]) 
		{
			puts("No");
			return 0;
		}
		if(a[i-1]<a[i])a[i]--;
	}
	puts("Yes");
	return 0;
}
