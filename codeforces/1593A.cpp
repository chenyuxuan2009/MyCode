#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;

/*×Ô¼º*/
void main_me()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		cout<<max(0ll,max(b,c)-a+1)<<" "<<max(0ll,max(a,c)-b+1)<<" "<<max(0ll,max(a,b)-c+1)<<"\n";	
	} 
}
main()
{
	main_me();

}

