#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=1;i<=6;i++)
    {
        cout<<i-1<<endl;
        string a;
        cin>>a; 
        if(a[0]=='w'||a[0]=='a'||a[2]==' ')
        {
            cout<<"grumpy";
            return 0;
        }
    }
    cout<<"normal";
}
