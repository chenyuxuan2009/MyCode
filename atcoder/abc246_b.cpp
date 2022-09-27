#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
	double a,b;
	cin>>a>>b;
	double s=sqrt(a*a+b*b);
	cout<<fixed<<setprecision(6)<<a/s<<" "<<fixed<<setprecision(6)<<b/s<<endl;
}
int main()
{
//	freopen("example.in","r",stdin);
//	freopen("example.out","w",stdout);
//	std::ios::sync_with_stdio(false);
//	cin.tie(nullptr);cout.tie(nullptr);
	int t=1;
	while(t--)
	{
		solve();
	}
    return 0;
}