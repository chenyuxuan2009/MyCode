#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int c,d;
	string S; cin>>S;
	int ans=0;
	for(int i=0;i<10000;i++)
	{
		int a=i/1000,b=i/100%10;c=i/10%10,d=i%10;
		string T(10,'x');
		T[a]=T[b]=T[c]=T[d]='o';
		for(int j=0;j<10;j++)if(S[j]!=T[j]&&S[j]!='?')goto home;
		ans++;
		home:;
	}
	cout<<ans<<endl;
}
