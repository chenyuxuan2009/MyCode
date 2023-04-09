#include<bits/stdc++.h>
using namespace std;
int fa[10020];
int F(int u)
{
    return fa[u]==u?u:fa[u]=F(fa[u]);
}
void U(int u,int v)
{
    int fu=F(u),fv=F(v);
    if(fu!=fv)fa[fu]=fv;
}
int n,m,ans;
bool f;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n+m;i++)fa[i]=i;
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        if(k)f=1;
        while(k--)
        {
            int x;
            cin>>x;
            U(x+n,i);
        }
    }
    if(!f)
    {
        cout<<n<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(F(i)==i)
        {
            ans++;
        }
    }
    cout<<ans-1<<endl;
    return 0;
}