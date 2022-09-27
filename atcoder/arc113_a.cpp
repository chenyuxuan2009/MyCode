#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,s=0;
	cin>>k;
	for(int i=1;i<=k;i++)
		for(int j=1;j<=k/i;j++)
			s+=k/i/j;
	cout<<s;
}
