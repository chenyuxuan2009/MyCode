#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c=1;
	cin>>a>>b;
	if(a+b<3)c++;
	if(a+b<10||b<3)c++;
	if(a+b<15||b<8)c++;
	cout<<c<<endl;
}
