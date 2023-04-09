#include<bits/stdc++.h>
using namespace std;
string PI="314159265358979323846264338327950288419716939937510";
int main()
{
    int t; 
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n=PI[i]-'0';
        long long cur=1;
        while(n--)
        {
            long long X; 
            cin>>X;
            cur*=X;
        }
        cout<<cur<<endl;
    }
    return 0;
}