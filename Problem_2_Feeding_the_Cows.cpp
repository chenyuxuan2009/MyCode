#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,k,_n=0,h=0,g=0;
	string s,ans="";
	cin>>n>>k>>s;
	for(int i=0;i<n;i++)ans+='.';
	for(int i=0;i<n;)
	{
		if(s[i]=='H'){i++;continue;}
		int j=i+k;
		if(j>n-1)j=n-1;
		if(ans[j]=='.')ans[j]=s[i],_n++;
		i=j+k+1;
	}
	for(int i=0;i<n;)
	{
		if(s[i]=='G'){i++;continue;}
		int j=i+k;
		if(j>n-1)j=n-1;
		if(ans[j]=='.')ans[j]=s[i],_n++;
		else if(j==n-1)ans[j-1]=s[i],_n++;
		i=j+k+1;
	}
	cout<<_n<<endl<<ans<<endl;
}
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