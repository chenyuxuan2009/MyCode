#include<bits/stdc++.h>
using namespace std;
int a[200005],b[200005],k,n,m;
int main()
{
 	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)cin>>a[i]; 
	for(int i=1;i<=m;i++)cin>>b[i];
	sort(a+1,a+n+1);
	sort(b+1,b+m+1);
	int sum=0,i=1,j=1;
	while(i<=n&&j<=m)
	{
		if(a[i]>=b[j]-k&&a[i]<=b[j]+k)sum++,i++,j++;
		else 
		{
			if(b[j]>a[i])i++;
			else j++;
		}
	}
	cout<<sum<<endl;
	return 0;
}