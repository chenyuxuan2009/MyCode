#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	for(char ch='a';ch<='z';ch++)
	{
		for(int i=0;i<=str.size();i++)
		{
			string nstr=str.substr(0,i)+ch+str.substr(i);
			string rev=nstr;
			reverse(rev.begin(),rev.end());
			if(rev==nstr)
			{
				cout<<nstr;
				return 0;
			}
		}
	}
	puts("NA");
	return 0;
}


