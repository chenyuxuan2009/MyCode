#include<bits/stdc++.h>
using namespace std;
long long f[50];
int n,k;
int main()
{
    cin>>n>>k;
    f[1]=k-1;
    f[2]=k*f[1];
    for(int i=3;i<=n;i++)
    {
        f[i]=(k-1)*(f[i-1]+f[i-2]);
    }
    cout<<f[n]<<endl;
    return 0;
}