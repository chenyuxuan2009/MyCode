#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,w,r,c;
	cin>>h>>w>>r>>c;
	int a=4;
	if(r==h)a--;
	if(r==1)a--;
	if(c==1)a--;
	if(c==w)a--;
	cout<<a<<endl;
	return 0;
}