#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t,ans;
	int j;
	cin>>s>>t;
	if(s.size()<t.size())
	{
		cout<<"UNRESTORABLE";
		return 0;
	}
	for(int i=0;i<=s.size()-t.size();i++)
	{
		int k=i;
		string ss=s;
		j=0;
		while(j<t.size())
		{
			if(ss[k]=='?')ss[k]=t[j];
			else if(s[k]!=t[j])break;
			k++;
			j++;
		}
		if(j==t.size())
		{
			for(int r=0;r<ss.size();r++)
			{
				if(ss[r]=='?')ss[r]='a';
			}
			if(ans=="")ans=ss;
			else ans=min(ans,ss);
		}
	}
	if(ans=="")cout<<"UNRESTORABLE";
	else cout<<ans;
	return 0;
}


