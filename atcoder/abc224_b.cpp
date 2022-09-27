#include<bits/stdc++.h>
using namespace std;
int a[51][51];
int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	for(int i =1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>a[i][j];
	bool f=false;
	for(int i1=1;i1<=n;i1++)
	{ 
		for(int i2=1;i2<i1;i2++)
		{ 
			for(int j1=1;j1<=m;j1++)
			{ 
				for(int j2=1;j2<j1;j2++)
				{
					if(a[i1][j1]+a[i2][j2]>a[i1][j2]+a[i2][j1])
					{
						
						f=true;
						break;
					}
				}
				if(f==true)break;
			}
			if(f==true)break;
		}
		if(f==true)break;
	}
	if(f==false)cout<<"Yes";else cout<<"No";
	return 0;
}

