#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;   
    int ans=s.size()-3;
    if(s.find("MOO")!=string::npos)ans+=0;
    else if(s.find("MOM")!=string::npos||s.find("OOO")!=string::npos)ans+=1;
    else if(s.find("OOM")!=string::npos)ans+=2;
    else ans=-1;
    cout<<ans<<endl;
}
/*
// MMM
OOO
// OMM
MOO
MOM
// OMO
// MMO
OOM
*/
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}