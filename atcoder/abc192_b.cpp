#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<climits>
typedef long long ll;
using namespace std;
void solve()
{
	char c;
	int i=1;
	while(cin>>c)
	{
		if((i&1)&&c>='A'&&c<='Z')
		{
			puts("No");return;
		}
		if(!(i&1)&&c>='a'&&c<='z')
		{
			puts("No");return;
		}
		i++;
	}
	puts("Yes");
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
