#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;string s,ans="";
    cin>>n>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i+2<s.size())
        {
            if(s[i+2]=='0'&&(i+3>=s.size()||i+3<s.size()&&s[i+3]!='0'))
            {
                ans+='a'+10*(s[i]-'0')+s[i+1]-'0'-1;
                i+=2;
                continue;
            }
        }
        ans+=s[i]-'0'+'a'-1;
    }
    cout<<ans<<endl;
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}