#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p=8;
    string s;
    while(cin>>s)
    {
        if(s.find('*')!=string::npos)
        {
            cout<<char('a'+s.find("*"))<<p<<endl;
            return 0;
        }
        p--;
    }   
    return 0;
}