#include<bits/stdc++.h>
#define int long long 
using namespace std;
int t,n;
int a[1919810];
signed main()
{
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1,greater<int>());
        for(int i=1;i<=n;i++)
        {
            if(a[i]%2==0&&i%2==1)
			    ans+=a[i];
            else if(a[i]%2==1 && i%2==0) 
			    ans-=a[i];
        }
        if(ans>0) printf("Alice\n");
        else if(ans==0) printf("Tie\n");
        else printf("Bob\n");
    }
    return 0;
}
