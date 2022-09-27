#include<bits/stdc++.h>
using namespace std;
bool east;
bool west;
bool north;
bool south;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='E')east=1;
		if(s[i]=='W')west=1;
		if(s[i]=='N')north=1;
		if(s[i]=='S')south=1;
	}
	puts(east==west&&north==south?"Yes":"No");
    return 0;
}
