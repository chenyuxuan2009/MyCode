#include<bits/stdc++.h>
using namespace std;
set<string>s;
int main()
{
	int n,maxx=-1,ans=-1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string str;
		int score;
		cin>>str>>score;
		int sz=s.size();
		s.insert(str);
		if(s.size()!=sz)
		{
			if(score>maxx)
			{
				maxx=score;
				ans=i;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

