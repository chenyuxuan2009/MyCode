#include<bits/stdc++.h>
using namespace std;
long long f[520];
int n;
int main()
{
    cin>>n;
    f[0]=1;
    for(int i=1;i<=n;i++)
        for(int j=n;j>=i;j--)
            f[j]+=f[j-i];
    cout<<f[n]-1<<endl;
    return 0;
}