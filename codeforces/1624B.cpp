#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	if((b-c+b)%a==0&&b-c+b>0){puts("YES");return;}
	if((a+c)%2==0)if((a+c)/2%b==0&&(a+c)/2>0){puts("YES");return;}
	if((b+b-a)%c==0&&b+b-a>0){puts("YES");return;}
	puts("NO");
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