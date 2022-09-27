#include<bits/stdc++.h>
using namespace std;
char c[2100000];
int cnt;
main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        c[++cnt]=s[i];
        if(cnt>1&&c[cnt-1]==c[cnt])
            cnt-=2;
    }
    for(int i=1;i<=cnt;i++)
		cout<<c[i];
}
