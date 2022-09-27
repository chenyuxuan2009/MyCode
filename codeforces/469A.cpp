#include<bits/stdc++.h>
using namespace std;
int arr[250];
int main()
{
	int n,p,q,cnt=0;
	cin>>n>>p;
	for(int i=1;i<=p;i++)
	{
		cin>>arr[i];
	}
	cin>>q;
	for(int i=p+1;i<=(p+q);i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+p+q+1);
	for(int i=1;i<=(p+q);i++)
	{
		if(arr[i]!=arr[i+1])
		{
			cnt++;
		} 
	}
	if(cnt==n)	cout<<"I become the guy.";
	else cout<<"Oh, my keyboard!";
	return 0;
}


