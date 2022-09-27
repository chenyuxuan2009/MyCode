#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	string a,b;
	bool f=0;
	cin>>a>>b;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	for(int i=0;i<min(a.size(),b.size());i++)
	{
		if(a[i]-48+b[i]-48>9)
		{
			f=1;
		}
	}
	puts(f==1?"Hard":"Easy");
}


