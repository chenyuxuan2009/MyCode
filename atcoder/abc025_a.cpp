#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int x;
	cin>>s>>x;
	cout<<s[(x+4)/5-1]<<s[(x%5==0?5:x%5)-1]<<endl;
    return 0;
}
