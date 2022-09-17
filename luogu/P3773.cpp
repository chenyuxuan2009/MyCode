#include<bits/stdc++.h>
using namespace std;
const int p=1e9+7;
int n,z;
int a[262145];
int f[262145];
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		int s=(1<<18)-1-a[i];
		for(int j=s;j;j=(j-1)&s)
		{
			f[a[i]]=(f[a[i]]+f[j|a[i]])%p;
		}
		z=(z+f[a[i]])%p;
		f[a[i]]++;
	}
	cout<<z<<endl;
	return 0;
}