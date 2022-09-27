#include<bits/stdc++.h>
using namespace std;
priority_queue<int>q;
int main()
{
	long long n,ans=0,minn=INT_MAX;
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

