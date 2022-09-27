#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=(n+1)/2;i++)
	{
		for(int j=1;j<=(n+1)/2+1;j++)
		{
			int k=n-i-j;
			if(i%3&&j%3&&k%3)
			{
				cout<<i<<" "<<j<<" "<<k<<endl;
				return 0;
			}
		}
	}
	return 0;
}
