#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0;
	for(int i=1;i<=3;i++)
	{
		int x,y;
		cin>>x>>y;
		sum+=x*y/10;
	}
	cout<<sum<<endl;
    return 0;
}
