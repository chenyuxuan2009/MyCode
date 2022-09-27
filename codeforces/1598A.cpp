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
		int n;
		bool f=0;
		string s1,s2;
		cin>>n;
		cin>>s1>>s2;
		for(int i=0;i<n;i++)
			if(s1[i]=='1'&&s2[i]=='1')
				f=1;
		cout<<(!f?"YES\n":"NO\n"); 
	}
}
main()
{
	main_me();

}

