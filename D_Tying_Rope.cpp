#include<bits/stdc++.h>
using namespace std;
int n,m;
int idx(char c){return c=='R'?0:1;}
int fa[400020];
int Loop,Lose;
int find(int u)
{
    return fa[u]==u?u:fa[u]=find(fa[u]);
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){fa[i]=fa[i+n]=i;}
    Lose=n;
    while(m--)
    {
        int _a,_c;
        char _b,_d;
        cin>>_a>>_b>>_c>>_d;
        _a+=n*idx(_b);
        _c+=n*idx(_d);
        // cout<<"Warn:"<<_a<<" "<<_c<<endl;
        int a=find(_a),b=find(_c);
        if(a==b)Loop++,Lose--;
        else Lose--,fa[a]=b;
    }
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<find(i)<<" "<<find(i+n)<<endl;
    // }
    cout<<Loop<<" "<<Lose<<endl;
    return 0;
}