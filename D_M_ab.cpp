#include<bits/stdc++.h>
typedef __int128 ll;
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    // n=(ll)n;
    // if(n*n<m)
    // {
    //     cout<<-1<<endl;
    //     return 0;
    // }
    long long ans=LLONG_MAX;
    for(long long i=1;i<=1e6&&i<=n;i++)
    {
        long long x=m/i;
        if(m%i!=0)x++;
        if(x<=n)ans=min(ans,(long long)x*i);
    }
    cout<<(ans==LLONG_MAX?-1:ans)<<endl;
    return 0;
}