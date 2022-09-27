#include<bits/stdc++.h>
using namespace std;
string y,x="312831303130313130313031312831303130313130313031312931303130313130313031312831303130313130313031312831303130313130313031312931303130313130313031";
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string s;
		cin>>s;
		y+=s;
	}
	cout<<(x.find(y)!=-1?"Yes\n":"No\n");
	return 0;
}
