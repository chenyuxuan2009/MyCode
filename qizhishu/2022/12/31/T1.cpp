#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
void solve()
{
    string a,b;
    cin>>a>>b;
    int la=0,lb=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='X')la++;
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='X')lb++;
    }
    int x=mp[a[a.size()-1]],y=mp[b[b.size()-1]];
    if(x==1)x-=la;
    else if(x==3)x+=la;
    if(y==1)y-=lb;
    else if(y==3)y+=lb;
    if(x==y)puts("=");
    else if(x>y)puts(">");
    else puts("<");
}
int main()
{
    mp['S']=1;
    mp['M']=2;
    mp['L']=3;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}