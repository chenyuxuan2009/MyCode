#include<bits/stdc++.h>
using namespace std;
long long a,ans;
string s;
int main()
{
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>s;
		if(s[1]=='+')
		{
			ans++;
		}
		else 
		{
			ans--; 
		}
	}
	cout<<ans<<endl;
 return 0;
}
