#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
main()
{
	string a,b;
	cin>>a>>b;
	int k=((b[0]+26)-a[0])%26;
	for(int i=1;i<a.size();i++)
	{
		if(k!=((b[i]+26)-a[i])%26)
		{
			cout<<"No";
			return 0;
		}
	}
	puts("Yes");
}


