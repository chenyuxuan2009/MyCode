#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
main() 
{
  	int T;
  	cin>>T;
  	while(T--) 
  	{
    	ull n,k;
	    cin>>n>>k;
	    if(n==1) 
		{
		    puts("0");
		    continue;
	    }
	    ull ans=0,x=1;
	    bool flag=1;
	    while(x<=k) 
		{
	    	if(x>=n)
		     	break;
		    x*=2;
		    ans++;
	    }
	    if(x<n)ans+=(n-x-1)/k+1ll;
	    cout<<ans<<endl;
	}
}
