#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;

/*×Ô¼º*/
void main_me()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int a,b,c;
	cin>>a>>b>>c;
	if(c==0)
	{
		cout<<(a>b?"Takahashi":"Aoki");
	}
	if(c==1)
	{
		cout<<(b>a?"Aoki":"Takahashi");
	}
}
main()
{
	main_me();

}

