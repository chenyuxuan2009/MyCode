#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin>>s;
	if(s=="YES"||s=="YEs"||s=="YeS"||s=="Yes"||s=="yES"||s=="yEs"||s=="yeS"||s=="yes")puts("YES");
	else puts("NO");
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