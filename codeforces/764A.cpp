#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,z;
	cin>>n>>m>>z;
	cout<<z/((n*m)/__gcd(n,m))<<endl;
	return 0;
}
