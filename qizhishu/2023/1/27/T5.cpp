#include<bits/stdc++.h>
using namespace std;
struct node
{
    int x,y,sec;
};
int dx[]={0,0,1,-1};
int dy[]={-1,1,0,0};
char c[120][120];
bool vis[120][120];
pair<int,int>C[10001];int top=0;
int n;
bool ok(int i,int j)
{
    return 1<=i&&i<=n&&1<=j&&j<=n&&!vis[i][j]&&c[i][j]!='#';
}
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>c[i][j];
            // cout<<c[i][j]<<" \n"[j==n];
            if(c[i][j]=='*')
            {
                C[++top]=make_pair(i,j);
            }
        }
    }
    queue<node>q;
    q.push({1,1,0});
    while(!q.empty())
    {
        node u=q.front();
        q.pop();
        if(u.x==n&&u.y==n)
        {
            cout<<u.sec<<endl;
            return;
        }
        vis[u.x][u.y]=1;
        // cout<<u.x<<" "<<u.y<<" "<<u.sec<<endl;
        if(c[u.x][u.y]=='*')
        {
            for(int j=1;j<=top;j++)
                if(C[j].first!=u.x&&C[j].second!=u.y)
                {
                    if(!vis[C[j].first][C[j].second])
                    {
                        q.push({C[j].first,C[j].second,u.sec+2});
                    }
                }
        }
        for(int i=0;i<4;i++)
        {
            int X=u.x+dx[i];
            int Y=u.y+dy[i];
            if(ok(X,Y))
            {
                q.push({X,Y,u.sec+1});
            }
        }
    }
}
int main()
{
    if(0){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    // int t;cin>>t;while(t--)
    solve();
    return 0;
}