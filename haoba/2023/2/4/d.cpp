#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string a="",b="";
    string ans="";
    int E=0;
    string s;
    cin>>s;
    if(s.find('.')==string::npos)
    {
        s+=".0";
    }
    int front_zero_cnt=0;
    for(front_zero_cnt=0;front_zero_cnt<s.size();front_zero_cnt++)
    {
        if(s[front_zero_cnt]!='0')break;
    }
    // cout<<"Front Zero:"<<front_zero_cnt<<endl;
    s=s.substr(front_zero_cnt);
    if(s[0]=='.')s='0'+s;
    // cout<<"DEL Front Zero:"<<s<<endl;
    int back_zero_cnt=0;
    for(int i=s.size()-1;~i;i--)
    {
        if(s[i]=='0')back_zero_cnt++;
        else break;
    }
    s.erase(s.size()-back_zero_cnt,s.size());
    if(s[s.size()-1]=='.')s=s+'0';
    // cout<<"Back Zero:"<<back_zero_cnt<<endl;
    // cout<<"DEL Back Zero:"<<s<<endl;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')break;
        a+=s[i];
    }
    // cout<<"Num before \'.\':"<<a<<endl;
    for(int i=s.size()-1;~i;i--)
    {
        if(s[i]=='.')break;
        b+=s[i];
    }
    reverse(b.begin(),b.end());
    // cout<<"Num after \'.\':"<<b<<endl;
    if(a!="0")
    {
        if(a.size()>1)
        {
            a.insert(a.begin()+1,'.');
            // cout<<"Insert \'.\':"<<a<<endl;
            E=a.size()-2;
            ans=a+(b!="0"?b:"");
        }
        else 
        {
            E=0;
            ans=a+'.'+(b!="0"?b:"");
        }
    }
    else
    {
        int cnt=0;
        for(cnt=0;cnt<b.size();cnt++)
        {
            if(b[cnt]!='0')break;
        }
        if(b=="0")cnt=0;
        E-=cnt+1;
        b=b.substr(cnt);
        // cout<<"Del Zero(b):"<<b<<" Zero cnt:"<<cnt<<endl;
        // cout<<"E:"<<E<<endl;
        if(b.size()!=1)b.insert(b.begin()+1,'.');
        // cout<<"Insert \'.\':"<<b<<endl;
        ans=b;
    }
    if(!E||ans=="0")cout<<ans<<endl;
    else cout<<ans<<'E'<<E<<endl;
}
int main()
{
    freopen("d.in","r",stdin);
    freopen("d.out","w",stdout);
    if(0){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    // int t;cin>>t;while(t--)
    solve(); 
    return 0;
}