#include<bits/stdc++.h>
using namespace std;
int t,h[30001];
int main() 
{
	cin>>t;
	h[1]=2;
	for(int i=2;i<=30000;i++) 
		h[i]=h[i-1]+(i-1)+2*(i);
	while(t--) 
	{
		int ans=0,x;
		cin>>x;
		for(int i=30000;i>=1;i--)
		{
			if(x>=h[i]) 
			{
				ans+=x/h[i];
				x-=x/h[i]*h[i];
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
