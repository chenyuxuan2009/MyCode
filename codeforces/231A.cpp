#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,ans=0,a,b,c;
	cin>>n;
    for(i=1;i<=n;i++)
    {
    	cin>>a>>b>>c;
        if(a+b+c>=2)
        {
        	ans++;
		}
	}
	cout<<ans;
	return 0;
}

