#include<bits/stdc++.h>
long long ans,maxx=1e18,x;
int main()
{
    std::cin>>x;
    ans=x-maxx%x*9%x*9%x;
    std::cout<<ans<<" ";
    ans=ans+maxx-1;
    std::cout<<ans<<"\n";
}
