#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>a>>b>>n;
	cout<<(ceil(n*1.0/(a*b/__gcd(a,b)))*a*b/__gcd(a,b))<<endl;
    return 0;
}
