#include<bits/stdc++.h>
using namespace std;
const string pi="314159265358979323846264338327";
void solve()
{
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.size()&&s[i]==pi[i];i++);
    cout<<i<<endl;
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}