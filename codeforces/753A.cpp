#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	double k=sqrt(2.0*n+0.25)-0.5;
	int kk=(int)k;
	cout<<kk<<endl;
	for(int i=1;i<=kk-1;i++)
		cout<<i<<" ";
	cout<<n-(kk-1)*kk/2<<endl;
	return 0;
}
