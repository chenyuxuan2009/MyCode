#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b,A,B,C;
	cin>>n>>m>>a>>b;
	A=n*a;
	B=(n+m-1)/m*b;
	C=n/m*b+n%m*a;
	if(A>=B&&B>=C)
	{
		cout<<C;
		return 0;
	} 
	if(A>=C&&C>=B)
	{
		cout<<B;
		return 0;
	} 
	if(B>=A&&A>=C)
	{
		cout<<C;
		return 0;
	} 
	if(B>=C&&C>=A)
	{
		cout<<A;
		return 0;
	} 
	if(C>=B&&B>=A)
	{
		cout<<A;
		return 0;
	} 
	if(C>=A&&A>=B)
	{
		cout<<B;
		return 0;
	} 
	return 0;
}


