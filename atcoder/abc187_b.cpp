#include<bits/stdc++.h>
using namespace std;
vector<int>x(114514),y(114514);
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) 
        cin>>x[i]>>y[i];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int t=abs(y[j]-y[i]);
            int s=abs(x[j]-x[i]);
            if(-s<=t&&t<=s) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
