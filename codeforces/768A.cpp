#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	} 
	if(n==2)
	{
		cout<<"0";
		return 0;
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		if(a[i]>a[1]&&a[i]<a[n])
		{
			s++;
		}
	} 
	cout<<s;
	return 0;
}


