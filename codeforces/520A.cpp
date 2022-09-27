#include<bits/stdc++.h>
using namespace std;
int a[150]; 
int main()
{
	int n;
	string s;
	cin>>n;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		a[s[i]]++;
	}
	for(int i=65;i<=90;i++)
	{
		if(a[i]>=1||a[i+32]>=1)
		{
			continue;
		}
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES"; 
	return 0;
}


