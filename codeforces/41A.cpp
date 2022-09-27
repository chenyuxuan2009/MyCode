#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]!=b[b.size()-1-i])
		{
			goto NO;
		}
	}	
	cout<<"YES";
	return 0;
	NO:;
	cout<<"NO";
	return 0;
}


