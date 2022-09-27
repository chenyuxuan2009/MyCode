#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int sum=0;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		sum+=(s[i]=='x');
	}
	puts(sum<=7?"YES":"NO");
    return 0;
}
