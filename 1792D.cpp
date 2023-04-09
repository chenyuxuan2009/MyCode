#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[50020][50];
long long p[50020][50];
long long qpow(long long x,long long y)
{
	long long re=1;
	for(;y>0;y>>=1)
	{
		if(y&1)re=re*x;
		x=x*x;
	}
	return re;
}
long long P(int i)
{
    long long re=0;
    for(int j=1;j<=m;j++)re+=qpow(11,m-j)*p[i][j];
    return re;
}
// long long id[200020];
multiset<long long>s;
void solve()
{
    s.erase(s.begin(),s.end());
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            p[i][a[i][j]]=j;   
        }
    }
    for(int i=1;i<=n;i++)
    {
        // id[i]=P(i);
        s.insert(P(i));
    }
    // sort(id+1,id+n+1);
    for(int i=1;i<=n;i++)
    {
        long long len=0,sum=0,tmp=0;
        while(len<m)
        {
            len++;
            sum+=a[i][len]*qpow(11,m-len);
            tmp=sum+qpow(11,m-len);
            // if(lower_bound(id+1,id+n+1,sum)==lower_bound(id+1,id+n+1,tmp)){len--;break;}
            if(s.lower_bound(sum)==s.lower_bound(tmp)){len--;break;}
        }
        cout<<len<<" ";
    }
    cout<<endl;
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}