#include<bits/stdc++.h>
using namespace std;
priority_queue<int>q;
int a[15]={0,1,4,2,3,5};
int main()
{
	int n,k;
	cin>>n>>k;
    for(int i=1;i<=n;i++)    
	{
		int x;
		cin>>x;
		q.push(-x);
		if(i>k)
		{
			q.pop();
			cout<<abs(q.top())<<endl;	
		}
		if(i==k)cout<<abs(q.top())<<endl;
	}
    return 0;
}
