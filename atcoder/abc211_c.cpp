#include <bits/stdc++.h>
using namespace std;
int d[9];
int main()
{
	string s,t="chokudai";
	cin>>s;
    d[0]=1;
	for(char c:s)
		for(int i=0;i<8;i++)
		  	if(c==t[i])
				(d[i+1]+=d[i])%=1000000007;
	cout<<d[8];
}
