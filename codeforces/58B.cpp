#include<bits/stdc++.h>
using namespace std;
void F(int n)
{
	cout<<n<<" ";
	if(n==1)
	{
		return;
	}
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			return F(n/i);
		}
	}
}
int main()
{
	int n;
	cin>>n;
	F(n);
	return 0;
}
