#include<bits/stdc++.h>
using namespace std;
struct node
{
	int a,b;
};
vector<node>v;
bool cmp(node x,node y)
{
	if(x.b!=y.b) return x.b<y.b;
	else return x.a<y.a;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
	} 
	sort(v.begin(),v.end(),cmp); 
	int ans=0;
	int x=0; 
	for(int i=0;i<n;i++)
	{
		if(v[i].a>x)
		{
			ans++;
			x=v[i].b;
		}
	}
	cout<<ans;
	return 0;
}
