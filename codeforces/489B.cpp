#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+10;
int a[MAXN],b[MAXN],n,m,A=1,B=1,ans;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;i++)cin>>b[i];
    sort(a+1,a+1+n);
    sort(b+1,b+1+m);
    while(A<=n&&B<=m)
	{
        if(a[A]>=b[B]-1&&a[A]<=b[B]+1)ans++,A++,B++;
        if(a[A]<b[B]-1)A++;
        if(a[A]>b[B]+1)B++;
    }
    cout<<ans<<"\n";
}
