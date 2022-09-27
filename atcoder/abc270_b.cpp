#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if((x>=0)==(y>=0)&&abs(y)>=abs(x))cout<<abs(x)<<endl;
	else if((x>=0)!=(y>=0))cout<<abs(x)<<endl;
	else if(z<=y&&y<=0||0<=y&&y<=z)cout<<-1<<endl;
	else cout<<abs(z)+abs(x-z)<<endl;
	return 0;
}