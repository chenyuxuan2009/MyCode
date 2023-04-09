#include<bits/stdc++.h>
using namespace std;
int p[200005],n,x;
int main()
{
	cin>>n>>x;
	for(int i=1;i<=n;i++)cin>>p[i];
	sort(p+1,p+n+1);
	int i=1,j=n,sum=0;
	while(i<=j)
	{
		if(p[i]+p[j]<=x)sum++,i++,j--;
		else j--,sum++;
	}
	cout<<sum<<endl;
	return 0;
}