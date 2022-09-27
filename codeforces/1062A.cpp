#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		char minn='z';
		int x=0;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]<minn)
			{
				minn=s[i];
				x=i;
			}
		}	
		cout<<minn<<" ";
		for(int i=0;i<s.size();i++)
			if(i!=x)
				cout<<s[i];
		cout<<endl;
	} 
}

