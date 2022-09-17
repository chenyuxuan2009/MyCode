#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int maxx=INT_MIN,sum=1;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=s[i+1])
		{
			maxx=max(maxx,sum); 
			sum=1;
		}
		else
		{
			sum++;
		}
	}
	cout<<maxx<<endl;
	return 0;
}