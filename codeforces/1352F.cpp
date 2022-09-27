#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	//分n2+1块
	//n1 00 n3 11
	string s;
	bool f1=0,f0=0;
	int f=n3>n1;
	for(int i=1;i<=n2+1;i++)
	{
		s+=char(f+'0');
		f^=1;
	}
	// cout<<n1<<" "<<n3<<endl;
	for(int i=0;i<n2+1;i++)
	{
		if(s[i]=='0'&&f0==0)
		{
			f0=1;
			for(int j=1;j<=n1;j++)
			{
				cout<<'0';
			}
		}
		if(s[i]=='1'&&f1==0)
		{
			f1=1;
			for(int j=1;j<=n3;j++)
			{
				cout<<'1';
			}
		}
		cout<<s[i];
	}
	cout<<endl;
}
/*
0010111111
0011
100001010101111
10
1110000
1111
000
*/
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}