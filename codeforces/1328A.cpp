#include<bits/stdc++.h>
using namespace std;
int a[10005],b[10005];
int main()
{
	int n; 
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		cout<<(b[i]-(a[i]%b[i]))%b[i]<<endl;
	}
	return 0;
}


