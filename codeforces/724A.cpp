#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
string s[7]={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
main()
{
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdin);
	string s1,s2;
	int a,b;
	cin>>s1>>s2;
	for(int i=0;i<7;i++)
	{
		if(s1==s[i])a=i;
		if(s2==s[i])b=i;
	}
	cout<<(((b-a+7)%7==0||(b-a+7)%7==2||(b-a+7)%7==3)?"YES\n":"NO\n");
}


