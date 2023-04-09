#include<queue>
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
string s;
int a[114514];
int main()
{
	while(cin>>s&&s!="END")
	{
		memset(a,0,sizeof(a));
		for(int i=0;i<s.size();i++)
		{
			a[s[i]]++;
		}
		priority_queue<int,vector<int>,greater<int> >q;
		for(int i=0;i<1919;i++)
		{
			if(a[i])q.push(a[i]);
		}
		int ans=0;
		while(q.size()>1)
		{
			int x,y;
			x=q.top();q.pop();
			y=q.top();q.pop();
			ans+=x+y;q.push(x+y);
		}
		if(!ans)ans=s.size();
		cout<<s.size()*8<<" "<<ans<<" "<<fixed<<setprecision(1)<<s.size()*8.0/ans<<endl;
	}
	return 0;
}