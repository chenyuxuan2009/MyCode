#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int n;
ll st[100];
int top;
ll pw=1;
ll k,ans;
ll a[100020];
ll s[100020];
map<ll,int>mp;
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=a[i]+s[i-1];
    }
    for(int i=0;i<=60;i++)
    {
        if(abs(pw)>1e14)break;
        st[++top]=pw;
        pw*=k;
    }
    mp[0]=1;
    for(int i=1;i<=n;i++)
    {
        if(k==1)ans+=mp[s[i]-1];
        else if(k==-1)ans+=mp[s[i]-1]+mp[s[i]+1];
        else 
        {
            for(int _=1;_<=top;_++)
            {
                ans+=mp[s[i]-st[_]];
            }
        }
        mp[s[i]]++;
    }
    cout<<ans<<endl;
    return 0;
}