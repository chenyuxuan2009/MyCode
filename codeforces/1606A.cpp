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
		int ab=0,ba=0;
		cin>>s;	
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='a'&&s[i+1]=='b')ab++;
			if(s[i]=='b'&&s[i+1]=='a')ba++;
		}
		if(ab==ba)
		{
			cout<<s<<endl;
		}
		else
		{
			
			for(int i=0;i<s.size();i++)
			{
				ab=0,ba=0;
				if(s[i]=='a')s[i]='b';
				else s[i]='a';
				for(int j=0;j<s.size();j++)
				{
					if(s[j]=='a'&&s[j+1]=='b')ab++;
					if(s[j]=='b'&&s[j+1]=='a')ba++;
				}
				if(ab==ba)
				{
					cout<<s<<endl;
					break;
				}
				if(s[i]=='a')s[i]='b';
				else s[i]='a';
			}
		}
	} 
}

