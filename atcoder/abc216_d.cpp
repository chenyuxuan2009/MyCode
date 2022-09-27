#include<bits/stdc++.h>
using namespace std;
int n,m,l;
vector<int>a[200020];
int v[200020];
queue<int>q;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>l;
		a[i].resize(l);
		for(int j=l-1;j>=0;j--)
			cin>>a[i][j];
		if(v[a[i].back()]>0)
		{
			q.push(v[a[i].back()]);
			q.push(i);
			n--;
		}
		else
		{
			v[a[i].back()]=i;
		}
	}
	while(q.size())
	{
		int i=q.front();
		q.pop();
		a[i].pop_back();
		if(a[i].size())
		{
			if(v[a[i].back()]>0)
			{
				q.push(v[a[i].back()]);
				q.push(i);
				n--;
			}
			else
			{
				v[a[i].back()]=i;
			}
		}
	}
	puts(n?"No":"Yes");
	return 0;
}
