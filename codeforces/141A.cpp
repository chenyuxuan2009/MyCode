#include<bits/stdc++.h>
using namespace std;
int a[150];
int main()
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	for(int i=0;i<s1.size();i++)
	{
		a[s1[i]]++;
	} 
	for(int i=0;i<s2.size();i++)
	{
		a[s2[i]]++;
	} 
	for(int i=0;i<s3.size();i++)
	{
		a[s3[i]]--;
	} 
	for(int i=65;i<=122;i++)
	{
		if(a[i]!=0)
		{
			cout<<"NO";
			return 0;
		}
	} 
	cout<<"YES";
	return 0;
}


