#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
main()
{
	ull n;
	cin>>n;
	int x[4]={0,1,3,4};
    while(n--)
    {
    	ull a,ans=0;
        cin>>a;
        while(a>0)
        {
            ans=ans+x[a&3];
            a>>=2;
        }
        cout<<ans<<endl;
    }
}


