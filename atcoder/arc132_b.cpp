#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p1,p2;
	cin>>n>>p1>>p2;
	cout<<((p1+1)%n==p2%n?min((n+1-p1)%n,(p1+1)%n):min((n-p1)%n+1,p1%n+1));
	return 0;
}
