#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,maxx=INT_MIN,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		maxx=max(maxx,x);
	}
	cout<<(maxx^x)<<endl;
    return 0;
}
