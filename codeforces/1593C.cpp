#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e5+10;
ll a[N];
ll s[N];
void solve()
{
    int n,k,res=0,start=0;
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>a[i];
		s[i]=0;
	}
	sort(a+1,a+1+k,greater<int>());
	for(int i=1;i<=k;i++)s[i]=n-a[i];
	for(int i=1;i<=k;i++)
	{
		if(start>=a[i]&&a[i]!=n)break;
		start+=s[i];
		res++;
	}
	cout<<res<<endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
	{
        solve();
    }
    return 0;
}
