#include<bits/stdc++.h>
using namespace std;
int a[400];
int main()
{
	int n,cnt=0;
	cin>>n;
	a[0]=1;
	a[360]=1;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		cnt+=x;
		a[cnt%360]=1;
	}
	int la=0,maxx=INT_MIN;
	for(int i=0;i<=360;i++)
	{
		if(a[i]==1)
		{
			maxx=max(i-la,maxx);
			la=i;
		}
	}
	cout<<maxx<<endl;
    return 0;
}
