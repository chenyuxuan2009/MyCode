#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,sum=0;
		cin>>x;
		for(int i=1;i<=int(sqrt(x));i++)
		{
			if(x%i==0)sum+=2;
		}
		cout<<(int(sqrt(x))*int(sqrt(x))==x?--sum:sum)<<endl;
	}
	return 0;
}