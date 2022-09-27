#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define for1(i,n,a,b) for(ll (i)=(n);(i)<=(a);(i)+=(b))
#define for2(i,n,a,b) for(ll (i)=(n);(i)>=(a);(i)-=(b))
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i;
		string a,b;
		cin>>a>>b;
		int ans=0;
		for(i=0;i<n;i++)
		{
		    if(a[i]=='0'&&b[i]=='1')
			{
				ans++;
			}
		    else if(i>0&&a[i-1]=='1'&&b[i]=='1')
			{
				ans++;
				a[i-1]='0';
			}
		    else if(i<n-1&&a[i+1]=='1'&&b[i]=='1')
			{
				ans++;
				a[i+1]='0';
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

