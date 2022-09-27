#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
main()
{
	int w,a,b;
	cin>>w>>a>>b;
	cout<<max(abs(a-b)-w,0)<<endl;
}


