#include<bits/stdc++.h>
using namespace std;
int n,q;
int f[200020];
int a[200020];
pair<int,int>p[200020];
long long add[200020];
long long mul[200020];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i].first;
        p[i].second=i;
    }
    sort(p+1,p+n+1);
    for(int i=1;i<=n;i++)
    {
        f[p[i].second]=i;
        a[i]=p[i].first;
        add[i]=add[i-1]+a[i];
        mul[i]=mul[i-1]+1LL*a[i]*i;
    }
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        long long ans=0;
        x=f[x];
        int i=lower_bound(a+1,a+n+1,y)-a-1;
        if(i==x)
        {
            ans+=mul[x-1]+1LL*y*x+mul[n]-mul[x];
        }
		else if(i<x)
        {
            ans+=1LL*y*(i+1);
			ans+=mul[i];
			ans+=(mul[x-1]-mul[i])+(add[x-1]-add[i]);
			ans+=mul[n]-mul[x]; 
		}
		else
        {
            ans+=1LL*y*i;
			ans+=mul[x-1];
			ans+=(mul[i]-mul[x])-(add[i]-add[x]);
			ans+=mul[n]-mul[i];
		}
        cout<<ans<<endl;
    }
    return 0;
}