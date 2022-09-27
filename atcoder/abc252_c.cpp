#include<bits/stdc++.h>
using namespace std;
string s[105];
int a[105][105];
int main()
{
	int n,ans=INT_MAX;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<s[i].size();j++)//0开始，错了好几次QwQ
		{
			a[s[i][j]-'0'][i]=j;//每种字符的第i的字符串所在位置。
			for(int k=1;k<i;k++)
			{
				if(a[s[i][j]-'0'][k]%10==j)
				{
					a[s[i][j]-'0'][i]+=10;//多10秒
				}
			}
		}
			
	}
	// for(int i=0;i<=9;i++)
	// {
	// 	for(int j=1;j<=n;j++)
	// 	{
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	for(int i=0;i<=9;i++)
	{
		int m=-1,cnt=0;
		for(int j=1;j<=n;j++)
		{
			m=max(m,a[i][j]);
		}	
		ans=min(ans,m);
		// cout<<m<<" "<<cnt<<endl;
		// if(cnt==0)ans=min(m,ans);
		// else ans=min(m+cnt*10,ans);
	}
	cout<<ans<<endl;
	return 0;
}