#include<bits/stdc++.h>
using namespace std;
int n;
pair<int,int>a[200005];
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{	
		int x;
		cin>>x;
		a[i]=make_pair(x,i);
	}
	sort(a,a+n);
	int sum=0,now=a[0].second;
	for(int i=0;i<n-1;i++)
	{
		if(now>a[i+1].second)
		{
			now=a[i+1].second;
			sum++;
		}
		else
		{
			now=a[i+1].second;
		}
	}
	cout<<sum+1<<endl;
	return 0;
}