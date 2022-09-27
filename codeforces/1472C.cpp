#include<iostream>
#include<cstring>
using namespace std;
const int kMaxN = 2e5 + 1;
int t,n,a[kMaxN],d[kMaxN],maxx;
int main() 
{
 	cin>>t;
	while(t--)
	{
	    maxx=0;
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		d[n]=a[n];
		for(int i=n-1;i>=1;i--)
		{
			d[i]=a[i];
			if(a[i]<=(n-i))
				d[i]+=d[i+a[i]];
		}
		for(int i=1;i<=n;i++)
			maxx=max(maxx,d[i]);
		cout<<maxx<<endl;
  	}
	return 0;
}
