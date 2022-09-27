#include<bits/stdc++.h>
using namespace std;
bool f[3000];
int main()
{
	int n;
	cin>>n;
	cout<<1<<endl;
	f[1]=1;
	fflush(stdout);
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		f[x]=1;
		for(int j=2;j<=2*n+1;j++)
		{
			if(f[j]==0)
			{
				f[j]=1;
				cout<<j<<endl;
				fflush(stdout);
				break;
			}
		}
		
	}
    return 0;
}