#include<bits/stdc++.h>
using namespace std;
#define int long long
int t,sum,n; 
void solve(string s,int l)
{
	if(sum==n)return;
	swap(s[l+1],s[l+2]);
//	swap(s[r-1],s[r-2]);
//	if(r-1==l+2)
//		swap(s[l+1],s[l+2]);
	cout<<s<<endl;
	sum++;
	solve(s,l+2);
} 
signed main()
{
	cin>>t;
	while(t--)
	{
		sum=1;
		cin>>n;
		int l=0,r=2*n-1;
		string s;
		for(int i=1;i<=n;i++)
		{
			s=s+'('+')';
		}	
		cout<<s<<endl;
		solve(s,l);
	}
	gt:;
}



