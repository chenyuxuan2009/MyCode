#include<bits/stdc++.h>
using namespace std;
map<char,char>mp;
void solve()
{
    string s;
    cin>>s;
    bool f=1;
    int L=0,R=s.size()-1;
    for(int i=0;i<s.size();i++)
    {
        if(mp[s[L]]!=s[R]){f=0;break;}
        L++;R--;
    }
    cout<<(f?"Yes":"No")<<endl;
}
int main()
{
    mp['A']='A';mp['B']='!';mp['C']='!';mp['D']='!';mp['E']='!';
    mp['F']='!';mp['G']='!';mp['H']='H';mp['I']='I';mp['J']='!';
    mp['K']='!';mp['L']='!';mp['M']='M';mp['N']='!';mp['O']='O';
    mp['P']='!';mp['Q']='!';mp['R']='!';mp['S']='!';mp['T']='T';
    mp['U']='U';mp['V']='V';mp['W']='W';mp['X']='X';mp['Y']='Y';
    mp['Z']='!';
    mp['a']='!';mp['b']='d';mp['c']='!';mp['d']='b';mp['e']='!';
    mp['f']='!';mp['g']='!';mp['h']='!';mp['i']='!';mp['j']='!';
    mp['k']='!';mp['l']='!';mp['m']='!';mp['n']='!';mp['o']='o';
    mp['p']='q';mp['q']='p';mp['r']='!';mp['s']='!';mp['t']='!';
    mp['u']='!';mp['v']='v';mp['w']='w';mp['x']='x';mp['y']='!';
    mp['z']='!';
    freopen("c.in","r",stdin);
    freopen("c.out","w",stdout);
    if(0){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve(); 
    return 0;
}