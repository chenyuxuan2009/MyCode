#include<bits/stdc++.h>
using namespace std;
const bool ZJS_AK_IOI=1;//fast read&write or not
void solve()
{
	int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=2;i<=n;i++){int x=min(a[i],a[i-1]);a[i]-=x;a[i-1]-=x;}
    puts(*max_element(a+1,a+n+1)?"NO":"YES");
}
int main()
{
	if(ZJS_AK_IOI){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
	int t;cin>>t;while(t--)
	solve();
	return 0;
}