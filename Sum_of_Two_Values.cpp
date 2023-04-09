#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(make_pair(x,i));
	}
	sort(v.begin(),v.end());
	int i=0,j=n-1;
	while(i<j)
	{
		if(v[i].first+v[j].first>m)
		{
			j--;
		}
		else if(v[i].first+v[j].first<m)
		{
			i++;
		}
		else
		{
			cout<<v[i].second+1<<" "<<v[j].second+1<<endl;
			return 0;
		}
	}
	cout<<"IMPOSSIBLE\n";
	return 0;
}