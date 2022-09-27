#include<bits/stdc++.h>
using namespace std;
int a[114154]; 
int main()
{
	bool f=0;
	int n,m;
	cin>>n>>m;
	while(m--)
	{
		int s,c;
		cin>>s>>c;
		if(s==1&&c==0)f=1;
		if(a[s]!=0&&a[s]!=c)
		{
			puts("-1");
			return 0;
		}
		a[s]=c;
	}
	if(f)
	{
		puts("-1");
		return 0;
	}
	if(a[1]==0&&n!=1)a[1]=1;
	for(int i=1;i<=n;i++)cout<<a[i];
	cout<<endl; 
	return 0;
}

