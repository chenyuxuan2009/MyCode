#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a;j++)
		{
			for(int l=1;l<=n;l++)
			{
				for(int k=1;k<=b;k++)
				{
					cout<<((l+i)%2==0?'.':'#');
				}
			}
				
			cout<<endl;
		}
	}
	return 0;
}