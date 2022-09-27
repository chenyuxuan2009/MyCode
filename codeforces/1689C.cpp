#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a[n+1];
    int v[n+1];
    for(int i=1;i<n;i++)
    {
    	int x,y;
    	cin>>x>>y;
    	a[x].push_back(y);
    	a[y].push_back(x);
	}
	for(int i=1;i<n;i++)
	{
		v[i]=(int)a[i].size();
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

