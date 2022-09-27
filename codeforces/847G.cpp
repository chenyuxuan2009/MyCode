#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	int ans=0;
	for(int j=0;j<s[0].size();j++)
	{
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=s[i][j]=='1';
		}
		ans=max(sum,ans);
	}
	cout<<ans<<endl;
	return 0;
}
