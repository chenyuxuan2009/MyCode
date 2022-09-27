#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b;
		if(b-a>=2)
		{
			s++;
		}
	}
	cout<<s;
	return 0;
}


