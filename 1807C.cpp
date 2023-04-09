#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    string s,st;
    cin>>n>>s;
    for(int i=0;i<n;i++)st+=' ';
    for(int i=0;i<n;i++)
    {
        if(st[i]==' ')
        {
            for(int j=0;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    st[j]=(st[i-1]=='1'?'0':'1');
                }
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        if(st[i]==st[i-1])
        {
            puts("NO");
            return;
        }
    }
    puts("YES");
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}