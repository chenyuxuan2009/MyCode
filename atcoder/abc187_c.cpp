#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<string>S(114514*2);
int main()
{
    ll n; 
    cin>>n;
    for(int i=0;i<n;i++)cin>>S[i];
    unordered_set<string>h(S.begin(),S.end());
    for(auto s:S)
    {
        if(h.count('!'+s))
        {
            cout<<s<<endl; 
            return 0;
        }
    }
    cout<<"satisfiable"<<endl;
    return 0;
}

