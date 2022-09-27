#include<bits/stdc++.h>
using namespace std;
int n,k,z;
int a[100020];
int s[100020];
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    for(int i=k;i<=n;i++)  
        z=max(z,s[i]-s[i-k]);
    cout<<z<<endl;
	return 0;
}

