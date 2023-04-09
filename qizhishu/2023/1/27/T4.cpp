#include<bits/stdc++.h>
using namespace std;
int A,B,C; 
int F[22][22][22][2];
bool dfs(int a,int b,int c,bool f)
{
    // cout<<a<<" "<<b<<" "<<c<<" "<<f<<endl;
    if(F[a][b][c][f]!=-1)return F[a][b][c][f];
    // if(max({a,b,c})==a+b+c&&a+b+c>0)return F[a][b][c][f]=f^1;
    set<bool>s;
    for(int i=1;i<=2;i++)
    {
        if(a-i>=0&&b-i>=0)s.insert(dfs(a-i,b-i,c,f^1));
        if(a-i>=0&&c-i>=0)s.insert(dfs(a-i,b,c-i,f^1));
        if(b-i>=0&&c-i>=0)s.insert(dfs(a,b-i,c-i,f^1));
    }
    if(s.size()==1)
    {
        return F[a][b][c][f]=*s.begin();
    }
    if(s.size()==2)
    {
        return F[a][b][c][f]=f;
    }
    if(s.size()==0)
    {
        return F[a][b][c][f]=f^1;
    }
}
void solve()
{
    memset(F,-1,sizeof(F));
    cin>>A>>B>>C;
    cout<<(dfs(A,B,C,1)?'Z':'X')<<endl;
    // for(int i=0;i<=A;i++)
    // {
    //     for(int j=0;j<=B;j++)
    //     {
    //         for(int k=0;k<=C;k++)
    //         {
    //             cout<<F[i][j][k][0]<<endl<<F[i][j][k][1]<<endl;
    //         }
    //     }
    // }
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    // int t;cin>>t;while(t--)
    solve();
    return 0;
}