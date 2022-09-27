#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
priority_queue<int>q;
main()
{
	int n,ans=0,minn=INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		q.push(-x);
		q.push(-x);
		ans+=x+q.top();
		q.pop();
	}
	cout<<ans<<endl;
}

