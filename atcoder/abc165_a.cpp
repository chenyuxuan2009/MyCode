#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;

/*×Ô¼º*/
void main_me()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int a,b,c,f=0;
	cin>>a>>b>>c;
	for(int i=b;i<=c;i++)
	{
		if(i%a==0)
		{
			f=1;
		}
	}
	puts(f==1?"OK":"NG");
}
main()
{
	main_me();

}

