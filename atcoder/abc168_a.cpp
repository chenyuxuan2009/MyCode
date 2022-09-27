#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
string s[10]={"pon","pon","hon","bon","hon","hon","pon","hon","pon","hon"};
/*×Ô¼º*/
void main_me()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int n;
	cin>>n;
	cout<<s[n%10];
}
main()
{
	main_me();

}

