#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,d,A=0,B=0,cnt=0;
    cin>>a>>b>>c>>d;
    if(a==0){cout<<1<<endl;return;}
    A=B=cnt=a;
    int x=min(b,c);
    cnt+=x*2;
    b-=x;c-=x;
    x=max(b,c);
    if(A>=b)cout<<cnt+x+(B-x>=d?d:B-x+1)<<endl;
    else cout<<cnt+A+1<<endl;
    // cout<<cnt+min({A+1,B+1,d})<<endl;
}
int main()
{
    if(0){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}