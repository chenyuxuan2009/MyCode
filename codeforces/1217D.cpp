#include<bits/stdc++.h>
using namespace std;
vector<int> a[5010];
int n,m,d[5010],x[5010],y[5010],z;
queue<int>q;
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		cin>>x[i]>>y[i];
		a[x[i]].push_back(y[i]); 
		d[y[i]]++;
	}
	for(int i=1;i<=n;i++)
		if(d[i]==0) q.push(i);
	while(q.size())
	{
		int u=q.front();
		z++;
		q.pop();
		for(int i:a[u])
			if(--d[i]==0) q.push(i);
	}
	if(z==n)
	{
		cout<<1<<endl;
		for(int i=0;i<m;i++)
			cout<<1<<' ';
	}
	else
	{
		cout<<2<<endl;
		for(int i=0;i<m;i++)
		{
			if(x[i]<y[i]) cout<<1<<' ';
			else cout<<2<<' '; 
		}
	}
	return 0;
}

