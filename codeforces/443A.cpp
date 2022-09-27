#include<bits/stdc++.h>
using namespace std;
bool f[150];
int main()
{
	string s;
	int sum=0;
	getline(cin,s);
	for(int i=1;i<s.size()-1;i++)
	{
		f[s[i]]=1;
	}
	for(int i=97;i<=122;i++)
	{
		if(f[i]==1)
		{
			sum++;
		}
	}
	cout<<sum;
	return 0;
}


