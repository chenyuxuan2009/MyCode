#include<bits/stdc++.h>
using namespace std;
struct song 
{
	int id,score,like;	
};
bool cmp(song a,song b)
{
	if(a.like>b.like)
	{
		return 1;
	}
	else if(a.like<b.like)
	{
		return 0;
	}
	else 
	{
		if(a.score>b.score)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
void solve()
{
	int n;
	cin>>n;
	song a[n+1];
	int b[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].score;
		a[i].id=i;
		b[i]=a[i].score;
	}
	string s;
	cin>>s;
	for(int i=0;i<n;i++)
	{
		a[i+1].like=(s[i]=='1'?1:0);
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		b[a[i].id]=n-i+1;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
