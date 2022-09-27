#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b; 
    cin>>a>>b;
    int x=0,y=0; 
    for(int i=0;i<3;i++)x+=a[i]-'0';
    for(int i=0;i<3;i++)y+=b[i]-'0';
    cout<<max(x,y)<<endl;
    return 0;
}
