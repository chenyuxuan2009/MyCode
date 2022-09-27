#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	if(r>8)r=15-r+1;
	if(c>8)c=15-c+1;
	cout<<(min(r,c)%2==1?"black\n":"white\n");
	return 0;
}

