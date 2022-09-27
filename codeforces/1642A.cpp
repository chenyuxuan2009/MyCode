#include<bits/stdc++.h>
using namespace std;
struct name
{
	int x,y;
};
bool cmp(name a,name b){return a.y>b.y;}
void solve()
{
	name a[3];
	for(int i=0;i<3;i++)cin>>a[i].x>>a[i].y;
	sort(a,a+3,cmp);
	cout<<(a[0].y==a[1].y?abs(a[0].x-a[1].x):0)<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}
