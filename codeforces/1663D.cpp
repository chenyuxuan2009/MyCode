#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int x;
	cin>>s>>x;
	if(s=="ABC")puts(x<=1999?"Yes":"No");
	if(s=="ARC")puts(x<=2799?"Yes":"No");
	if(s=="AGC")puts(x<1200?"No":"Yes");
	return 0;
}