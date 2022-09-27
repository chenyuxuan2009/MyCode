#include<bits/stdc++.h>
using namespace std;
struct book
{
	string f,r;
};
bool cmp(book a,book b)
{
	return a.r<b.r;
}
int main()
{
	int n;
	cin>>n;
	book s[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>s[i].f;
		s[i].r=s[i].f;
		reverse(s[i].r.begin(),s[i].r.end());
	}
	sort(s+1,s+n+1,cmp);
	for(int i=1;i<=n;i++)
	{
		cout<<s[i].f<<endl;
	}
	return 0;
}
