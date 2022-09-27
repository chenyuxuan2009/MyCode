#include<bits/stdc++.h>
using namespace std;
bool f[50];
int main()
{
	int n,m,cnt=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cout<<1<<endl;
		fflush(stdout);
		int x;
		cin>>x;
		if(x==-1)f[i]=0;
		else if(x==1)f[i]=1;
		else return 0;
	}
	int mid,x,l=2,r=m;
	while(l<=r)
	{
		cnt%=n;
		
		mid=(l+r)/2;
		cout<<mid<<endl;
		fflush(stdout);
		cin>>x;
		if(f[cnt]==0&&x==-1||f[cnt]==1&&x==1)l=mid+1;
		else if(f[cnt]==0&&x==1||f[cnt]==1&&x==-1)r=mid-1;
		else if(x==-2||x==0)return 0;
		cnt++;
	}
    return 0;
}