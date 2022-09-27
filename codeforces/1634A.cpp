#include<bits/stdc++.h>
using namespace std;
int a[10]={1,2,4,8,16,32,64,128,256,512};
bool check(string str)//еп╤о╩ьнд
{
	string st=str;
	reverse(st.begin(),st.end());
	if(st==str)return true;
	else return false;
}
void solve()
{
	int n,k;
	string s;
	cin>>n>>k>>s;
	if(check(s)||k==0)
	{
		puts("1");
		return;
	}
	else
	{
		puts("2");
	}
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
