#include<bits/stdc++.h>
using namespace std;
int f[100020][3];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		f[i][0]=max(f[i-1][1],f[i-1][2])+a;
		f[i][1]=max(f[i-1][0],f[i-1][2])+b;
		f[i][2]=max(f[i-1][0],f[i-1][1])+c;
	}
	cout<<max(f[n][0],max(f[n][1],f[n][2]))<<endl;
	return 0;
}
