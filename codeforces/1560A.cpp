#include<bits/stdc++.h>
using namespace std;
#define int long long
#define N 10000005
int a[1001];
bool f(int n)
{
	return (n%3==0||n%10==3)?0:1; 
}
signed main()
{
	for(int i=1,j=1;j<=1000;i++)
	{
		if(f(i)==1)a[j++]=i;
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n; 
		cout<<a[n]<<endl;
	} 
	
}



