#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> a;
int R[100001];
int C[100001];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>R[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>C[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int i,j;
		cin>>i>>j;
		if(R[i]+C[j]>n)
		{
			cout<<"#";
		}
		else
		{
			cout<<".";
		}
	}
	return 0;
}
