#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll f(ll a,ll b,ll n)
{
    if(a>=n)return 1;
    ll d=(n-a)/(a-b);
    if((n-a)%(a-b)!=0)d++;
    return d+1;
}
void solve()
{
    int q;
    ll L=LLONG_MIN,R=LLONG_MAX;
    cin>>q;
    while(q--)
    {
        int op;
        cin>>op;
        if(op==1)
        {
            ll a,b,n;
            cin>>a>>b>>n;
            if(n==1)
            {
                if(1<L&&a<L||1>R&&a>R)
                {
                    cout<<0<<" ";
                }
                else
                {
                    cout<<1<<" ";
                    L=max(L,1LL);
                    R=min(R,a);
                }
                continue;
            }
            ll l=max((a-b)*(n-2)+a+1,(a-b)*(n-1)+1),r=(a-b)*(n-1)+a;
            if(l<L&&r<L||l>R&&r>R)
            {
                cout<<0<<" ";
            }
            else 
            {
                L=max(L,l);
                R=min(R,r);
                cout<<1<<" ";
            }
        }
        else
        {
            ll a,b;
            cin>>a>>b;
            cout<<(f(a,b,L)!=f(a,b,R)?-1:f(a,b,L))<<" ";
        }
    }
    cout<<endl;
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}