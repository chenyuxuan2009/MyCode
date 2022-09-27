#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cout<<n*2<<endl;
	cout<<(n-1)%4+1;
	for(int i=0;i<(n-1)/4;i++)cout<<4;
	cout<<endl;
	return 0;
}